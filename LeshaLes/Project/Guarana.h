#pragma once
#include "Organism.h"

class Gaurana :public Organism
{
	Gaurana()
	{
		this->strength = 0;
	}
	void Colission(Organism * org) override {
		org->SetStrength(org->GetStrenght() + 3);
	}
	char Draw() override { return 'G'; }
	~Guarana() {}
};
