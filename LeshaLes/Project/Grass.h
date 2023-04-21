#pragma once
#include "Plant.h"
class Grass : Organism
{
private:
	int GetRandomCoord(World* w);
public:
	Grass();
	Grass(int x, int y);
	

	void Action(World* w) override;
	void Colission(Organism* w) override;
	char Draw() override;
};

