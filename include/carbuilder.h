#ifndef CARBUILDER_H
#define CARBUILDER_H

#include "car.h"
#include "builder.h"

#include <iostream>
#include <string>



//ConcreteBuilder: specific implementation of building steps
//We may have several variation of Builders,  implemented differently
class CarBuilder : public Builder{
  private:
    Car *car;
  public:
    //Fresh builder should contain blank car
    CarBuilder(){this->reset();}
    ~CarBuilder(){delete car;}
    void reset() override {this->car = new Car();}

    //Production steps with same car instance
    void setEngine(const std::string &engine) override;
    void setSeats(const std::string &seats) override;
    void setTripComputer(const std::string &tripComputer) override;
    void setGPS(const std::string &gps) override;

    void setColor(const std::string& color) override;
    void setSunroof(bool hasSunroof) override;

    Car* GetProduct();
};


#endif