#pragma once
#ifndef ACHIEVEMENTS
#include "Observer.h"
#include "Entity.h"

class Achievements :public Observer {
public:
	virtual void onNotify(const Entity& enity, int event) {
		switch (event)
		{
		case 1:
			if (enity.isHero()) {

			}
			break;

			//处理其他事件
		default:
			break;
		}
	}
};
#endif 
