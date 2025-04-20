#ifndef HORSE_H
#define HORSE_H

class Horse {
private:
    int position;
    int number;
public:
    Horse(int num);  
    Horse(); 

    void advance();
    void printLane(int raceLen) const;
    bool hasWon(int raceLen) const;
};

#endif

