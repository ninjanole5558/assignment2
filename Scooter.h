#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "Vehicle.h"

class Scooter : public Vehicle {

private:
    int mileage;

public:
    explicit Scooter(string brand, string model, int gearCount = 1);

    virtual ~Scooter();

    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SCOOTER_H
