#pragma once
#include "Organism.h"
class Kosulya :public Organism
{
public:
	Kosulya()
	{
		this->initiative = 0;
		this->strength = 0;
	}

	void Action(World* w) override {
		//TODO: ��� ���� �������� ����� �������� ��������
	
	}
	void Colission(Organism* w) override {}
	char Draw()override { return 'K'; }
};

