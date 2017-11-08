#pragma once


#include <iostream>
#include "Animation.h"

class State
{
public:
	virtual void idle(Animation* a)
	{
		std::cout << "state::Idling" << std::endl;
	}

	virtual void jumping(Animation* a)
	{
		std::cout << "state::Jumping" << std::endl;
	}

	virtual void climbing(Animation* a)
	{
		std::cout << "state::Climbing" << std::endl;
	}
};