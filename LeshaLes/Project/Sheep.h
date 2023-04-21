#pragma once
#include "Plant.h"
class Sheep : Organism
{
public:
	Sheep();
	void Action(World* w)override;
	void Colission(Organism* org) override;
	char Draw() override;
};
