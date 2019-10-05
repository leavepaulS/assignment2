//
// Created by Paul Santora
//

#include "Jet.h"
#include <cstdlib>

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Unknown");
    setModel("Unknown");
}

Jet::Jet(string brand, string model, string fuelType, int engines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(engines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engines) {
    numberOfEngines = engines;
}

double Jet::mileageEstimate(double time) {
    double mileage = ((rand() % 61) + 40) * time;
    if (numberOfEngines > 2 && fuelType == "Rocket")
        for (int i = 1; i <= numberOfEngines; ++i)
            mileage += mileage * 0.055;
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
          to_string(getNumberOfEngines());
}