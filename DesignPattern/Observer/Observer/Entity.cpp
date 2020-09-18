#include "Entity.h"

bool Entity::isHero() const {
	if (type == "hero") return true;
	else return false;
}