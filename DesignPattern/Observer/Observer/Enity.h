#pragma once
#ifndef ENITY

#include<string>

class Enity {
public:
	Enity() {};
	virtual ~Enity() {};

	bool isHero() const;

private:
	std::string type;
}; 

#endif // ENITY
