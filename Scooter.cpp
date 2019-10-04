#include "Scooter.h"


Scooter::Scooter(string brand, string model)
{
  setBrand(brand);
  setModel(model);
}

Scooter::~Scooter() = default;

double Scooter::mileageEstimate(double time)
{
  double mileage;
  mileage = (rand() % 40 + 1) * time;
  if(time > 30)
    mileage = mileage * 0.75;
  
  return mileage;
}
string Scooter::toString()
{
  string s = "-> Scooter\n" + Vehicle::toString();
  return s;
}
