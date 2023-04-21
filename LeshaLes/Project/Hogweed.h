#pragma once
#include "Plant.h"
class Hogweed : Organism
{
	Hogweed()
	{
		this->strength = 10;
	}

	void Action(World* w) override {}
	void Colission(Organism* w) override {}
	char Draw() override { return 'H'; }
	~Hogweed() {}
};