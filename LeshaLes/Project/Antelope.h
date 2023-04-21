#pragma once
#include "Plant.h"
class Antelope : Organism
{
	Antelope()
	{
		this->initiative = 4;
		this->strength = 4;
	}

	void Action(World* w) override {}
	void Colission(Organism* w) override {}
	char Draw() override { return 'A'; }
	~Antelope() {}
};
