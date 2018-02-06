#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP

#include "Critter.hpp"

class Doodlebug : public Critter
{
    private:
        int stepsToStarve;
    public:
        Doodlebug();
        void move(int type);
        void breed();
        void starve();
};

#endif
