#include <iostream>
#include <Windows.h>
#include <vector>
#include "World.h"
#include "Organism.h"
#include "Grass.h"
#include "Kosulya.h"
#include "Wolf.h"
#include "Sheep.h"
using namespace std;

int main() {
	{
		//for (int k = 0; k < 10; k++)
		//{
		//	for (int i = 0; i < 10; i++)
		//	{
		//		for (int j = 0; j < 20; j++)
		//		{
		//			cout << k;
		//		}
		//		cout << endl;
		//	}

		//	if (k == 9) {
		//		k = -1;
		//	}

		//	Sleep(100);
		//	//HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		//	//SetConsoleCursorPosition(handle, COORD{0,0});
		//}
	}

	//Grass* or_ = new Grass();

	std::vector<Organism*> orgs{
		//(Organism*)new Grass(7, 5),
		//(Organism*)new Kosulya(13, 5),
		(Organism*)new Wolf(7, 5),
		(Organism*)new Wolf(8, 4),
		(Organism*)new Wolf(4, 3),
		//(Organism*)new Wolf(),
		//(Organism*)new Sheep(),
	};

	World w(10, 20, orgs);

	while (true)
	{
		w.ExecuteTure();
		w.DrawWorld();
		getchar();
	}
    return 0;
}