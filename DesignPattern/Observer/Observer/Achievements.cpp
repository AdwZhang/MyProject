#include "Achievements.h"

void Achievements::onNotify(const Entity& enity, Event event) {
	switch (event)
	{
	case EVENT_ENTITY_FALL:
		if (enity.isHero()) {

		}
		break;

		//���������¼�
	default:
		break;
	}
}
