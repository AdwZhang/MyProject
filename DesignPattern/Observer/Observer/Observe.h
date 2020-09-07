#pragma once

class Observe {
public:
	virtual ~Observe() {};
	virtual void onNotify(const int& enity, int event) = 0;
};

