#pragma once
#ifndef ACHIEVEMENTS
#include "Observer.h"
#include "Entity.h"
#include "Event.h"

class Achievements :public Observer {
public:
	virtual void onNotify(const Entity& enity, Event event);
};
#endif 
