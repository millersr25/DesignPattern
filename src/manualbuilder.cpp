#include "manualbuilder.h"



void ManualBuilder::setEngine(const std::string &engine) {
  this->manual->engine = engine;
}

void ManualBuilder::setSeats(const std::string &seats) {
  this->manual->seats = seats;
}

void ManualBuilder::setTripComputer(const std::string &tripComputer){
  this->manual->tripComputer = tripComputer;
}

void ManualBuilder::setGPS(const std::string &gps){
  this->manual->gps = gps;
}

void ManualBuilder::setColor(const std::string& color){
  this->manual->color = color; 
}

void ManualBuilder::setSunroof(bool hasSunroof){
  this->manual->hasSunroof = hasSunroof; 
}

// smart pointers may be better
Manual* ManualBuilder::GetProduct(){
  Manual *result = this->manual;
  this->reset();
  return result;
}