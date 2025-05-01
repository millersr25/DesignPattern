#include "director.h"



void Director::makeSUV(Builder *builder){
  std::string engine = "SUV Engine";
  std::string seats = "5";
  std::string tripComputer = "Advanced Trip Computer";
  std::string gps = "Advanced GPS";
  builder->setEngine(engine);
  builder->setSeats(seats);
  builder->setTripComputer(tripComputer);
  builder->setGPS(gps);
}


void Director::makeSportsCar(Builder *builder){
  std::string engine = "Sports Engine";
  std::string seats = "2";
  std::string tripComputer = "Trip Computer";
  std::string gps = "Basic GPS";
  builder->setEngine(engine);
  builder->setSeats(seats);
  builder->setTripComputer(tripComputer);
  builder->setGPS(gps);
}
