#include "Jet.h"
#include <cstdlib>
#include <ctime>

Jet::Jet(string brand, string model, string fuelType, int numEngines)
{
  setBrand(brand);
  setModel(model);
  setNumEngines(numEngines)
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

double Jet::mileageEstimate(double time)
{
  srand(time(0));
  double mileage = floor((rand() % 60) + 40);  //40-100mpm
  mileage += mileage + (mileage * (numberOfEngines-1) * 0.055); //%5.5 increase per engine
}

string Jet::toString()
{
  return "-> Jet\n" + Vehicle::toString() + "\n\tNumber of Engines: "
          + getNumEngines();
}
