#ifndef MANUAL_H
#define MANUAL_H

#include <iostream>
#include <string>



class Manual{
  public:
    std::string engine, seats, tripComputer, gps, color;
    bool hasSunroof; 

    void listFeatures() const; 
};

#endif