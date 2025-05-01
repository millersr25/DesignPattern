#ifndef MANUALBUILDER_H
#define MANUALBUILDER_H

#include "manual.h"
#include "builder.h"

#include <iostream>
#include <string>



class ManualBuilder : public Builder{
  private:
    Manual *manual;
  public:
    //Fresh builder should contain blank car
    ManualBuilder(){this->reset();}
    ~ManualBuilder(){delete manual;}
    void reset() override {this->manual = new Manual();}

    //Production steps with same car instance
    void setEngine(const std::string &engine) override;
    void setSeats(const std::string &seats) override;
    void setTripComputer(const std::string &tripComputer) override;
    void setGPS(const std::string &gps) override;

    void setColor(const std::string& color) override;
    void setSunroof(bool hasSunroof) override;

    // smart pointers may be better
    Manual* GetProduct();
};

#endif