#ifndef HORSE_H
#define HORSE_H

class Horse {
private:
    int position;
    int number;
public:
    Horse(int num);  // Constructor with the number of the horse
    Horse();  // Default constructor (needed for array creation)

    void advance();
    void printLane(int raceLen) const;
    bool hasWon(int raceLen) const;
};

#endif

