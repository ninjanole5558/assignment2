#include "Skateboard.h"
#include <cmath>

Skateboard::Skateboard(string brand, string model)
{
  setBrand(brand);
  setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)
{
  double mileage = (rand() % 4 + 1)/10.0; //.1 to .4
  if(time >= 25 && time <= 250)
    mileage = (int)time % (int)(time / 3) + 1;
  
  return mileage;
}
string Skateboard::toString()
{
  string s = "-> Skateboard\n" + Vehicle::toString();
  return s;

}
