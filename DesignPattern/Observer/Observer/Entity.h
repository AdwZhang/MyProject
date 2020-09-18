#pragma once
#ifndef ENTITY

#include<string>

class Entity {
public:
	Entity() {};
	virtual ~Entity() {};

	bool isHero() const;

private:
	std::string type;
}; 

#endif // ENTITY
