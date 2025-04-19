#ifndef RACE_H
#define RACE_H

#include "Horse.h"

const int NUM_HORSES = 5;

class Race {
private:
    Horse horses[NUM_HORSES];
public:
    Race();
    void run();
    ~Race();
};

#endif


