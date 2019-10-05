//
// Created by Paul Santora
//

#include "Heelys.h"


Heelys::Heelys(string model, string condition) {
    setBrand("Heelys");
    setModel(model);
    setShoeCondition(condition);
}

Heelys::~Heelys() = default;

string Heelys::getShoeCondition() {
    return shoeCondition;
}

void Heelys::setShoeCondition(string condition) {
    shoeCondition = condition;
}

double Heelys::mileageEstimate(double time) {
    double mileage = .7 * time;
    if (shoeCondition == "New")
        mileage += mileage * 0.1;
    else if (shoeCondition == "Old")
        mileage -= mileage * 0.2;
    else if (shoeCondition == "Missing Wheel")
        mileage -= .3 * time;
    return mileage;
}

string Heelys::toString() {
    string s = "-> Heelys\n\t";
    return "-> Heelys\n" + Vehicle::toString() + "\n\tCondition: " +
           shoeCondition;
}