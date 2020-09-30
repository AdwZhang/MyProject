#pragma once
#ifndef OBSERVER
#include "Entity.h"
#include "Event.h"

#define MAX_OBSERVERS 100

class Observer {
public:
	virtual ~Observer() {};
	virtual void onNotify(const Entity& enity, Event event) = 0;
};

#endif // !OBSERVER

