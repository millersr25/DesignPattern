#include "clientcode.h"



int main(){
  Director *director = new Director();
  ClientCode1(*director);
  ClientCode2(*director);
  ClientCode3(*director);
  delete director;
}