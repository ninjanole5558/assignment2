#include "Jet.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Jet::Jet(string brand, string model, int numEngines)
{
  setBrand(brand);
  setModel(model);
  setNumEngines(numEngines);
  if(numberOfEngines>2)
    setFuelType("Rocket");
  else
    setFuelType("Jet");
}

Jet::~Jet() = default;

void Jet::setNumEngines(int engines)
{
  if(engines<0 || engines>4)
    numberOfEngines = 1;
  else {
    numberOfEngines = engines;
  }
}

int Jet::getNumEngines()
{
  return numberOfEngines;
}

double Jet::mileageEstimate(double timed)
{
  double mileage = floor((rand() % 60) + 40)*timed;  //40-100mpm
  if(getFuelType()=="Rocket")
    mileage += (mileage * (numberOfEngines) * 0.055); //%5.5 increase per engine
  
  return mileage;

}

string Jet::toString()
{
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: "
          + to_string(getNumEngines());
}
