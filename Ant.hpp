#ifndef ANT_HPP
#define ANT_HPP

#include "Critter.hpp"

class Ant : public Critter
{
    private:
    public:
        Ant();
        void move(int typeIn);
        void breed();
};

#endif
