
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

void Idle::walking(Animation * a)
{
	std::cout << "walking ";
	a->setCurrent(new Idle());
	delete this;
}

void Idle::digging(Animation * a)
{
	std::cout << "digging" << std::endl;
	a->setCurrent(new Idle());
	delete this;

}


