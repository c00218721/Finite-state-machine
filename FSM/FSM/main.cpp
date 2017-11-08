//author callum lynch
//date started 26/10/2017
//login: c00218721

#include "Animation.h"
#include <iostream>

int main()
{
	Animation fsm; int i = 0;
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds dura(1000));
			i = 1;
		}
		else
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::millisecond dura(1000));
			i = 0;
		}
	}
}






