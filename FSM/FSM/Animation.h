#pragma once


#include <iostream>
#include "Idle.h"

class Animation
{
	class State* current;

public:
	Animation();
	void setCurrent(State* s)
	{
		current = s;
	}

	void idle();
	void jumping();
	void climbing();
};

Animation::Animation()
{
	current = new Idle();
}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}
void Animation::climbing()
{
	current->climbing(this);
}