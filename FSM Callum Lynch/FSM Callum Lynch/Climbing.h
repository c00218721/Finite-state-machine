//author callum lynch
#pragma once


#include <iostream>
#include "State.h"
#include "Idle.h"

class Climbing :public State
{
public:
	Climbing();
	~Climbing();
	void idle(Animation* a)
	{
		std::cout << "Going from climbing to idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};