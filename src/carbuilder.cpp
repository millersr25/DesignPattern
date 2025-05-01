#include "carbuilder.h"



void CarBuilder::setEngine(const std::string &engine){
  this->car->engine = engine;
}

void CarBuilder::setSeats(const std::string &seats){
  this->car->seats = seats;
}

void CarBuilder::setTripComputer(const std::string &tripComputer){
  this->car->tripComputer = tripComputer;
}

void CarBuilder::setGPS(const std::string &gps){
  this->car->gps = gps;
}

void CarBuilder::setColor(const std::string& color){
  this->car->color = color; 
}

void CarBuilder::setSunroof(bool hasSunroof){
  this->car->hasSunroof = hasSunroof; 
}

// smart pointers may be better
Car* CarBuilder::GetProduct(){
  Car *result = this->car;
  this->reset();
  return result;
}