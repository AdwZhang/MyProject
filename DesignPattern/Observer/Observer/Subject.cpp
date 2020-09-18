#include "Subject.h"

void Subject::addObserver(Observer* observer) {

}

void Subject::removeObserver(Observer* observer) {

}

void Subject::notify(const Entity& entity, int event) {
	for (int i = 0; i < numObservers_; i++) {
		observers_[i]->onNotify(entity, event);
	}
}