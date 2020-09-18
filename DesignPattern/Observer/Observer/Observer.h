#pragma once
#ifndef OBSERVER
#include "Entity.h"

#define MAX_OBSERVERS 100

class Observer {
public:
	virtual ~Observer() {};
	virtual void onNotify(const Entity& enity, int event) = 0;
};

#endif // !OBSERVER

