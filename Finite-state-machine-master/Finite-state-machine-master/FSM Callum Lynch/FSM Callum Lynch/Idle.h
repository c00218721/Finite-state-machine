//author callum lynch
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
	void walking(Animation* a);
	void digging(Animation * a);
};

