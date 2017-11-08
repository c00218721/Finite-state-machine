//author callum lynch
#include "Animation.h"
#include "Idle.h"

Animation::Animation()
{
	current = new Idle();
	count = 0;
}

void Animation::movement()
{
	Animation fsm; int i = 0;
	

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && count < 1)
	{
		fsm.jumping();
		count++;
	}
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		if (count >= 1)
		{
			count = 0;
			fsm.idle();
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		//walk right
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		//dig with shovel
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		//walk right
	}
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