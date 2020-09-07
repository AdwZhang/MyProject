#pragma once
#ifndef OBSERVER

class Observer {
public:
	virtual ~Observer() {};
	virtual void onNotify(const int& enity, int event) = 0;
};

#endif // !OBSERVER

