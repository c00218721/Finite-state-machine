//author callum lynch
#pragma once
#include <SFML\Graphics.hpp>

class Animation
{
	class State* current;

public:
	bool m_jumping;
	bool m_climbing;
	bool m_idle;
	bool m_walkingRight;
	bool m_walkingLeft;
	bool m_digging;

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
	void walking();
	void digging();
};

