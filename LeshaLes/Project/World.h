#pragma once
#include "Organism.h"
#include <vector>

class Organism;
class World
{
private:
    char** board = nullptr;
    int row, col;
    void ClearBoard();
public:
    int GetRow();
    int GetCol();

    World(int row, int col, const std::vector<Organism*>& organisms);

    ~World();

    void ExecuteTure();
    void DrawWorld();

    std::vector<Organism*> organisms;
};

