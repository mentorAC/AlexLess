#include "Sheep.h"
#include <iostream>

Sheep::Sheep()
{
	this->initiative = 4;
	this->strength = 4;
}

void Sheep::Action(World* w)
{
}

void Sheep::Colission(Organism* org)
{
}

char Sheep::Draw()
{
	return 'S';
}
