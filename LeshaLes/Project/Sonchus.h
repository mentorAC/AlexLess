#pragma once
#include "Organism.h"
class Sonchus :public Organism
{
	Sonchus()
	{
		this->strength = 0;
	}
	void Colission(Organism* org) override {}

	void Action(World* w) override {
		//TODO: три раза вызываем метод создания растения
	
	}
	char Draw()override { return 'S'; }
	~Sonchus() {}
};

