#pragma once
#ifndef PHYSICS
#include "Subject.h"
class Physics :public Subject
{
public:
	void updateEntity(Entity& entity);
};

#endif // !PHYSICS
