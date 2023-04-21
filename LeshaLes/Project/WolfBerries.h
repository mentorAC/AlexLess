#pragma once
#include "Organism.h"

class WolfBerries :public Organism
{
	WolfBerries()
	{
		this->strength = 99;
	}
	void Colission(Organism* org) override {
		org->Died();
	}
	char Draw()override { return 'B'; }
	~WolfBerries() {}
};