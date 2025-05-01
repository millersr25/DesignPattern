#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

#include <iostream>
#include <string>



// Director works with any builder that client passes
class Director{
  public:
    void makeSUV(Builder *builder);
    void makeSportsCar(Builder *builder);
    void makeLuxuryCar(Builder *builder);
};

#endif