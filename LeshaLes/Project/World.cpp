#include "World.h"
#include <iostream>
#include <Windows.h>

void World::ClearBoard()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

int World::GetRow()
{
    return row;
}
int World::GetCol()
{
    return col;
}
World::World(int row, int col, const std::vector<Organism*>& organisms)
    :row{ row }, col{ col }, organisms{organisms}
{
    board = new char* [row];
    for (int i = 0; i < row; i++)
    {
        board[i] = new char[col];
    }

    ClearBoard();
}

World::~World()
{

    for (auto org : organisms)
    {
        delete org;
    }

    if (board == nullptr) {
        return;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] board[i];
    }
    delete[] board;

}

void World::ExecuteTure()
{
    ClearBoard();
    for (auto org: organisms)
    {
        org->Action(this);

        board[org->GetY()][org->GetX()] = org->Draw();
    }
}

void World::DrawWorld()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, COORD{0,0});
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
}
