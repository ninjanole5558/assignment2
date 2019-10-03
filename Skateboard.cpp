
Skateboard::Skateboard(string brand, string model)
{
  setBrand(brand);
  setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)
{
  srand(time(0));
  double mileage = rand() % 0.4 + 0.1;
  if(time => 25 && time =< 250)
    mileage = time % (time / 3) + 1;
}
string Skateboard::toString()
{
  string s = "-> Skateboard\n\t" + Vehicle::toString();
  return s;

}
