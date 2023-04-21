#pragma once
#include "Organism.h"

class Gaurana :public Organism
{
	Gaurana()
	{
		this->initiative = 0;
		this->strength = 0;
	}

		void Action(World * w) override {}
		void Colission(Organism * org) override {
			org->SetStrength(org->GetStrenght() + 3);
		}
		char Draw()override { return 'g'; }
};
