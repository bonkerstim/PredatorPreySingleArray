#include "Grid.hpp"

Grid::Grid()
{
    grid = new Critter** [20];

    for (int row = 0; row < 20; row++)
    {
        grid[row] = new Critter* [20];
    }

    for (int row = 0; row < 20; row++)
    {
        for (int col = 0; col < 20; col++)
        {
            grid[row][col] = NULL;
        }
    }

    grid[10][10] = new Ant();
    grid[0][0] = new Doodlebug();
}

Grid::~Grid()
{
    for (int row = 0; row < 20; row++)
    {
        for (int col = 0; col < 20; col++)
        {
            if (grid[row][col] != NULL)
            {
                delete grid[row][col];
                grid[row][col] = NULL;
            }
        }
        delete [] grid[row];
        grid[row] = NULL;
    }

    delete [] grid;
    grid = NULL;
}

void Grid::displayGrid()
{
    for (int row = 0; row < 20; row++)
    {
        for (int col = 0; col < 20; col++)
        {
            if (grid[row][col] == NULL)
            {
                cout << '_' << ' ';
            }
            else if (grid[row][col]->getType() == ANT)
            {
                cout << 'O' << ' ';
            }
            else if (grid[row][col]->getType() == DOODLEBUG)
            {
                cout << 'X' << ' ';
            }
        }
        cout << endl;
    }
}

void Grid::moveCritters()
{
    for (int row = 0; row < 20; row++)
    {
        for (int col = 0; col < 20; col++)
        {
            if (grid[row][col] != NULL)
            {
                grid[row][col]->move(DOODLEBUG);
                grid[row][col]->move(ANT);
            }
        }
    }
}
