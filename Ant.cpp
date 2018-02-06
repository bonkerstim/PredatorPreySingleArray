#include "Ant.hpp"

Ant::Ant()
{
    type = ANT;
    steps = 0;
    stepsToBreed = 3;
}

void Ant::move(int type)
{
    if (type == ANT)
    {
        cout << "Ant moved.." << endl;
        steps++;
        cout << steps << endl;
        if (steps == stepsToBreed)
        {
            breed();
        }
    }
}

void Ant::breed()
{
    cout << "Ant is breeding.." << endl;
    steps = 0;
}
