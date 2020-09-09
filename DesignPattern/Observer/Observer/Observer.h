#pragma once
#ifndef OBSERVER
#include "Enity.h"

#define MAX_OBSERVERS 100

class Observer {
public:
	virtual ~Observer() {};
	virtual void onNotify(const Enity& enity, int event) = 0;
};

#endif // !OBSERVER

