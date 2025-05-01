#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>
#include <string>



//Builder: create Car and Manual
class Builder{
  public:
    virtual ~Builder(){}
    
    virtual void setEngine(std::string &engine) = 0;
    virtual void setSeats(std::string &seats) = 0;
    virtual void setTripComputer(std::string &tripCompueter) = 0;
    virtual void setGPS(std::string &gps) = 0;
    
    virtual void reset() = 0;
};
#endif