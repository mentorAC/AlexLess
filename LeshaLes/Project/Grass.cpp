#include "Grass.h"
#include <ctime>



//Grass::Grass() {
//	this->initiative = 0;
//	this->strength = 0;
//
//	srand(time(NULL));
//}

Grass::Grass()
{
}

Grass::Grass(int x, int y) : Plant(x, y) {}

void Grass::Colission(Organism* w)
{
}

void Grass::Action(World* w)
{
	Plant::Action(w);
	if (_plantX != -1 && _plantY != -1) {
		w->organisms.push_back((Organism*)new Grass(_plantX, _plantY));
	}

	_plantX = -1;
	_plantY = -1;
}

char Grass::Draw()
{
	return 'G';
}
