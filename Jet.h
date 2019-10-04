#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <cmath>

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    explicit Jet(string brand, string model, int numEngines = 1);

    virtual ~Jet();
    void setNumEngines(int engines);
    int getNumEngines();
    virtual double mileageEstimate(double timed);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
