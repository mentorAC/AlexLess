#include "Grass.h"

int Grass::GetRandomCoord(World* w)
{
	int coord

	return 0;
}

Grass::Grass() {
	this->initiative = 0;
	this->strength = 0;
}

Grass::Grass(int x, int y) : Grass()
{
	this->x = x;
	this->y = y;
}

void Grass::Action(World* w)
{
	w->organisms.push_back((Organism*)new Grass());
}

void Grass::Colission(Organism* w)
{
}

char Grass::Draw()
{
	return 'G';
}
