#include "manual.h"

void Manual::listFeatures() const {
    std::cout << "Manual Features: ";
    std::cout << "\n  Engine: " << engine;
    std::cout << "\n  Seats: " << seats;
    std::cout << "\n  TripComputer: " << tripComputer;
    std::cout << "\n  GPS: " << gps << "\n";
}