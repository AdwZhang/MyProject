using System;
using UnityEngine;

public class Clock : MonoBehaviour
{
    public Transform hoursTransform;
    public Transform minutesTransform;
    public Transform secondsTransform;
    public bool continuous;
    const float degreesPerHour = 30f;
    const float degreesPerMinute = 6f;
    const float degreesPerSecond = 6f;

    void Awake()
    {
        Debug.Log(DateTime.Now);
        hoursTransform.localRotation =
            Quaternion.Euler(0f, DateTime.Now.Hour * degreesPerHour, 0f);
        minutesTransform.localRotation =
            Quaternion.Euler(0f, DateTime.Now.Minute * degreesPerMinute, 0f);
        secondsTransform.localRotation =
            Quaternion.Euler(0f, DateTime.Now.Second * degreesPerHour, 0f);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (continuous)
        {
            UpdateContinuous();
        }
        else
        {
            UpdateDiscrete();
        }
    }

    void UpdateContinuous()
    {
        TimeSpan time = DateTime.Now.TimeOfDay;
        Debug.Log(time.TotalMinutes);
        hoursTransform.localRotation =
            Quaternion.Euler(0f, (float)time.TotalHours * degreesPerHour, 0f);
        minutesTransform.localRotation =
            Quaternion.Euler(0f, (float)time.TotalMinutes * degreesPerMinute, 0f);
        secondsTransform.localRotation =
            Quaternion.Euler(0f, (float)time.TotalSeconds * degreesPerSecond, 0f);
    }

    void UpdateDiscrete()
    {
        DateTime time = DateTime.Now;
        Debug.Log(time.Minute);
        hoursTransform.localRotation =
            Quaternion.Euler(0f, time.Hour * degreesPerHour, 0f);
        minutesTransform.localRotation =
            Quaternion.Euler(0f, time.Minute * degreesPerMinute, 0f);
        secondsTransform.localRotation =
            Quaternion.Euler(0f, time.Second * degreesPerSecond, 0f);
    }
}
