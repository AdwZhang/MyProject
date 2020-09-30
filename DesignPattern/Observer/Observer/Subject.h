#pragma once
#include "Observer.h"
#include "Event.h"

class Subject {
public:
	void addObserver(Observer* observer);
	void removeObserver(Observer* observer);

private:
	Observer* observers_[MAX_OBSERVERS];
	int numObservers_ = 0;

protected:
	void notify(const Entity& entity, Event event);
};