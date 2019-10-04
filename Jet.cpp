#include "Jet.h"
#include <cstdlib>
#include <ctime>

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
  srand(time(0));
  double mileage = floor((rand() % 60) + 40)*timed;  //40-100mpm
  mileage += mileage + (mileage * (numberOfEngines-1) * 0.055); //%5.5 increase per engine

}

string Jet::toString()
{
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: "
          + to_string(getNumEngines());
}
