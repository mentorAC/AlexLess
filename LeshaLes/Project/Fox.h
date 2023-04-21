#pragma once
#include "Plant.h"
class Fox : Organism
{
	Fox()
	{
		this->initiative = 7;
		this->strength = 3;
	}
	void Action(World* w) override {}
	void Colission(Organism* org) override {}
	char Draw() override { return 'F'; }
	~Fox() {}
};
