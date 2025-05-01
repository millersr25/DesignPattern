#include "carbuilder.h"



void CarBuilder::setEngine(std::string &engine){
  this->car->engine = engine;
}

void CarBuilder::setSeats(std::string &seats){
  this->car->seats = seats;
}

void CarBuilder::setTripComputer(std::string &tripComputer){
  this->car->tripComputer = tripComputer;
}

void CarBuilder::setGPS(std::string &gps){
  this->car->gps = gps;
}

// smart pointers may be better
Car* CarBuilder::GetProduct(){
  Car *result = this->car;
  this->reset();
  return result;
}