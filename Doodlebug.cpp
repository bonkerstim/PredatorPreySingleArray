#include "Doodlebug.hpp"

Doodlebug::Doodlebug()
{
    type = DOODLEBUG;
    steps = 0;
    stepsToBreed = 8;
    stepsToStarve = 3;
}

void Doodlebug::move(int type)
{
    if (type == DOODLEBUG)
    {
        cout << "Doodlebug moved.." << endl;
        steps++;
        cout << steps << endl;
        if (steps == stepsToStarve)
        {
            starve();
        }
        else if (steps == stepsToBreed)
        {
            breed();
        }
    }
}

void Doodlebug::breed()
{
    cout << "Doodlebug is breeding.." << endl;
    steps = 0;
}

void Doodlebug::starve()
{
    cout << "Doodlebug is starving.." << endl;
    steps = 0;
}
