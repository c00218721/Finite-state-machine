//author callum lynch
#pragma once



#include <iostream>
//#include "Animation.h"
#include "State.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation* a);
};