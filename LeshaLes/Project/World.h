#pragma once
#include "Organism.h"
#include <vector>

class Organism;
class World
{
private:
    char** board = nullptr;
    Organism*** organismsBoard = nullptr;
    int row, col;
    const char emptyCell = ' ';
    void ClearBoard();
    Organism* GetOrganismByPosition(int x, int y);
    int step = 0;
public:
    int GetRow();
    int GetCol();

    bool isEmptyCell(int x, int y);

    World(int row, int col, const std::vector<Organism*>& organisms);

    ~World();

    void ExecuteTure();
    void DrawWorld();

    std::vector<Organism*> organisms;
};

