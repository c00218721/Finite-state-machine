
#include "Idle.h"

Idle::Idle()
{
}

Idle::~Idle()
{
}

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