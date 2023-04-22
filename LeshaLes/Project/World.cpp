#include "World.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include "Animal.h"

void World::ClearBoard()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            organismsBoard[i][j] = nullptr;
            board[i][j] = emptyCell;
        }
    }
}

Organism* World::GetOrganismByPosition(int x, int y)
{
    for (auto org : organisms) {
        if (org->GetX() == x && org->GetY() == y) {
            return org;
        }
    }
    //TODO: throw exception
    return nullptr;
}

int World::GetRow()
{
    return row;
}
int World::GetCol()
{
    return col;
}
bool World::isEmptyCell(int x, int y)
{
    return board[y][x] == emptyCell;
}
World::World(int row, int col, const std::vector<Organism*>& organisms)
    :row{ row }, col{ col }, organisms{organisms}
{
    organismsBoard = new Organism * *[row];
    board = new char* [row];
    for (int i = 0; i < row; i++)
    {
        board[i] = new char[col];
        organismsBoard[i] = new Organism * [col];
    }
    ClearBoard();

    for (auto org: organisms)
    {
        organismsBoard[org->GetY()][org->GetX()] = org;
    }

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
        organismsBoard[i];
    }
    delete[] board;
    delete[] organismsBoard;


}

void World::ExecuteTure()
{
    ClearBoard();
    int current_size = organisms.size();
    for (int i = 0; i < current_size; i++)
    {
        organisms[i]->Action(this);
        if (dynamic_cast<Animal*>(organisms[i]) != nullptr &&
            board[organisms[i]->GetY()][organisms[i]->GetX()] != emptyCell){
            organisms[i]->Colission(organismsBoard[organisms[i]->GetY()][organisms[i]->GetX()]);
        }

        board[organisms[i]->GetY()][organisms[i]->GetX()] = organisms[i]->Draw();
        organismsBoard[organisms[i]->GetY()][organisms[i]->GetX()] = organisms[i];
    }

    for (int i = current_size; i < organisms.size(); i++)
    {
        if (board[organisms[i]->GetY()][organisms[i]->GetX()] != emptyCell) {
            Organism* other = organismsBoard[organisms[i]->GetY()][organisms[i]->GetX()];
            organisms[i]->Colission(other);
            other->Colission(organisms[i]);
        }
    }

    for (int i = 0; i < organisms.size(); i++)
    {
        if (organisms[i]->IsDied()) {
            delete organisms[i];
            organisms.erase(organisms.begin() + i);
            i--;
        }
    }

}

void World::DrawWorld()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, COORD{0,0});
    std::cout << std::string(col + 2, '-') << std::endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == 0) {
                std::cout << '|';
            }
            std::cout << board[i][j];
            if (j == col-1) {
                std::cout << '|';
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::string(col + 2, '-') << std::endl;
    std::cout << "\nStep -> " << step++;
}
