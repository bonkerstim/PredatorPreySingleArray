#ifndef GRID_HPP
#define GRID_HPP

#include "Ant.hpp"
#include "Doodlebug.hpp"

class Grid
{
    private:
        Critter*** grid;
    public:
        Grid();
        ~Grid();
        void displayGrid();
        void moveCritters();
};

#endif
