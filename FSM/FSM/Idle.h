#pragma once


#include <iostream>
#include"Jumping.h"
#include "Animation.h"
#include "State.h"

class Idle : public State
{
public:
	Idle();
	~Idle();

	void jumping(Animation* a);
	void climbing(Animation* a);
};

void Idle::jumping(Animation* a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::climbing(Animation* a)
{
	std::cout << "climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}