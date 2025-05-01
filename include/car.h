#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>



class Car{
  public:
    std::string engine, seats, tripComputer, gps, color;
    bool hasSunroof; 

    void listFeatures() const;
};

#endif