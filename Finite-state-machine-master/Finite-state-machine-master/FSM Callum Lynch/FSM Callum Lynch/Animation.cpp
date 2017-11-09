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

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && m_jumping == false)
	{
		fsm.jumping();
		m_jumping = true;

		while (m_jumping == true && count == 0)
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && m_climbing == false)
			{
				fsm.climbing();
				m_climbing = true;
				count++;
			}
		}

		m_climbing = false;
		count--;

	}
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		if (m_jumping == true)
		{
			count = 0;
			m_jumping = false;
			m_idle = false;
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && m_jumping == false && m_walkingLeft == false)
	{
		//walk right
		fsm.walking();
		std::cout << "left" << std::endl;
		m_walkingLeft = true;
		
	}
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::D)  && m_walkingLeft == true)
	{
		m_walkingLeft = false;
		m_idle = false;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && m_climbing == false && m_jumping == false && m_digging == false)
	{
		fsm.digging();
		m_digging = true;
		
	}
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::S) && m_digging == true)
	{
		m_digging = false;
		m_idle = false;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && m_jumping == false && m_walkingRight == false)
	{
		fsm.walking();
		std::cout << "right" << std::endl;
		m_walkingRight = true;
		
	}
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::A) && m_walkingRight == true)
	{
		m_walkingRight = false;
		m_idle = false;
	}

	if (m_walkingRight == false && m_jumping == false && m_digging == false && m_climbing == false && m_walkingLeft == false && m_idle == false)
	{
		fsm.idle();
		m_idle = true;
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

void Animation::walking()
{
	current->walking(this);
}

void Animation::digging()
{
	current->digging(this);
}
