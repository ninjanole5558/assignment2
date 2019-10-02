#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "Vehicle.h"

class Jet : public Vehicle {

private:
    int numberOfEngines;

public:
    explicit Jet(string brand, string model, int numberOfEngines = 1);

    virtual ~Jet();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
