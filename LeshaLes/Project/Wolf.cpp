#include "Wolf.h"
#include <iostream>

Wolf::Wolf()
{
	this->initiative = 5;
	this->strength = 9;
}

void Wolf::Action(World*)
{
}

void Wolf::Colission(Organism* org)
{
}

char Wolf::Draw()
{
	return 'W';
}
