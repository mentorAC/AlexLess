#include "Wolf.h"
#include <iostream>

Wolf::Wolf()
{
	this->initiative = 5;
	this->strength = 9;
}

Wolf::Wolf(int x, int y):Animal(x, y)
{
}

void Wolf::Colission(Organism* org)
{
	if (dynamic_cast<Wolf*>(org) != nullptr) {

		for (int i = 0; i < 8; i++)
		{
			if (world->isEmptyCell(this->x + step_x[i], this->y + step_y[i])) {
				world->organisms.push_back(new Wolf(this->x + step_x[i], this->y + step_y[i]));
				return;
			}
		}
		for (int i = 0; i < 8; i++)
		{
			if (world->isEmptyCell(org->GetX() + step_x[i], org->GetY() + step_y[i])) {
				world->organisms.push_back(new Wolf(org->GetX() + step_x[i], org->GetY() + step_y[i]));
				return;
			}
		}

	}
}

char Wolf::Draw()
{
	return 'W';
}
