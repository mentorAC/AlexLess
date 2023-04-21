#pragma once
#include "Plant.h"
class Wolf : Organism
{
public:
	Wolf();
	void Action(World*) override;
	void Colission(Organism* org) override;
	char Draw() override;
};
