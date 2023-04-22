#include "Animal.h"

int Animal::GetRandomX(World* w)
{
	while (true)
	{
		int x = rand() % 3 - 1;

		int result_x = this->x + x;

		if (result_x >= 0 && result_x < w->GetCol()) {
			return result_x;
		}
	}

	return 0;
}

int Animal::GetRandomY(World* w)
{
	while (true)
	{
		int y = rand() % 3 - 1;

		int result_y = this->y + y;

		if (result_y >= 0 && result_y < w->GetRow()) {
			return result_y;
		}
	}

	return 0;
}

Animal::Animal()
{
}

Animal::Animal(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Animal::Action(World* w)
{
	this->world = w;

	//if (rand() % (int)probability == 0) {

		x = GetRandomX(w);
		y = GetRandomY(w);
		//probability += 0.5;
	//}
}
