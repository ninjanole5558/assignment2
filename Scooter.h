#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "PoweredVehicle.h"
#include <cstdlib>

class Scooter : public PoweredVehicle {

private:

public:
    explicit Scooter(string brand, string model);

    virtual ~Scooter();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SCOOTER_H
