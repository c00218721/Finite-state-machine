//author callum lynch
#pragma once
#include <SFML\Graphics.hpp>

class Animation
{
	class State* current;

public:
	int count = 0;

	Animation();
	void setCurrent(State* s)
	{
		current = s;
	}

	void movement();


	void idle();
	void jumping();
	void climbing();
};

