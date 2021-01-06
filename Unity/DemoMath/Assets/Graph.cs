using UnityEngine;
public class Graph : MonoBehaviour
{
    [Range(10, 10000)]
    public int resolution = 10;

    public Transform pointPrefab;
    Transform[] points;

    void Awake()
    {
        float step = 2f / resolution;
        Vector3 scale = Vector3.one * step;
        Vector3 position = Vector3.right;
        Vector3 rotation = Vector3.zero;
        rotation.x = 90;
        rotation.y = 90;

        points = new Transform[resolution];
        for (int i = 0; i < resolution ; i++)
        {
            Transform point = Instantiate(pointPrefab);
            
            position.x = -1 + step / 2 + step * i;
            position.y = position.x * position.x;
            point.localPosition = position;
            point.localScale = scale;
            point.SetParent(transform,false);
            points[i] = point;
        }
    }

    void Update()
    {
        for(int i = 0;i< points.Length; ++i)
        {
            Transform point = points[i];
            Vector3 position = point.localPosition;
            position.y = Mathf.Sin(Mathf.PI * (position.x + Time.time)) / 2;
            point.localPosition = position;
        }
    }


}