#pragma once
#include "Observer.h"
class Subject {
private:
	Observer* observers_[MAX_OBSERVERS];
};