#include "Race.h"
#include <iostream>
#include <cstdlib>
#include <ctime> 


const int raceLen = 20;  

Race::Race() {
    for (int i = 0; i < NUM_HORSES; ++i) {
        horses[i] = Horse(i); 
    }
}

void Race::run() {
    bool raceOver = false;
    while (!raceOver) {
        system("clear");
        for (int i = 0; i < NUM_HORSES; ++i) {
            horses[i].advance();  
            horses[i].printLane(raceLen);  
        }

        for (int i = 0; i < NUM_HORSES; ++i) {
            if (horses[i].hasWon(raceLen)) { 
                std::cout << "Horse " << i << " wins!!!\n";
                raceOver = true;
            }
        }

        if (!raceOver) {
            std::cout << "Press Enter to continue...";
            std::cin.get();
        }
    }
}

Race::~Race() {
   
}



