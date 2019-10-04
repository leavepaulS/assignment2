//
// Created by Paul Santora
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int engines);

    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines(int engines);
    virtual double mileageEstimate(double time);
};

#endif //DRIVINGSIMULATOR_JET_H