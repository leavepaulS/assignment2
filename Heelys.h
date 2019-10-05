//
// Created by Paul santora
//
// Heelys are shoes with wheels under the heel
//

#ifndef DRIVINGSIMULATOR_HEELYS_H
#define DRIVINGSIMULATOR_HEELYS_H

#include "Vehicle.h"

class Heelys : public Vehicle {

private:
    string shoeCondition;

public:
    explicit Heelys(string model, string condition);

    virtual ~Heelys();
    string getShoeCondition();
    void setShoeCondition(string condition);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_HEELYS_H
