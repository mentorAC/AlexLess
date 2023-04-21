#pragma once
#include "Plant.h"
class Turtle : Organism
{
	Turtle()
	{
		this->initiative = 1;
		this->strength = 2;
	}

	void Action(World* w) override {}
	void Colission(Organism* org) override {
	
		if (org->GetStrenght() < 5) {
			//TODO: возврат org на изначальное место
		}
	}
	char Draw() override { return 'T'; }
	~Turtle() {}
};