#include <iostream>
#include "Ant.hpp"
#include "Doodlebug.hpp"
#include "Grid.hpp"

int main()
{
    Grid grid;

    grid.displayGrid();
    int steps = 20;
    for (int step = 0; step < steps; step++)
    {
        grid.moveCritters();
    }

    return 0;
}
