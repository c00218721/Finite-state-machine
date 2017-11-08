#pragma once


#include <iostream>
#include "Animation.h"
#include "State.h"

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