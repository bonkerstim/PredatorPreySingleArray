#ifndef CRITTER_HPP
#define CRITTER_HPP

#include <iostream>
using std::cout;
using std::endl;

enum CritterType { DOODLEBUG, ANT };

class Critter
{
    protected:
        int type;
        int steps;
        int stepsToBreed;
        int xCoord;
        int yCoord;
    public:
        Critter();
        virtual void move(int typeIn) = 0;
        virtual void breed() = 0;
        int getType();
};

#endif
