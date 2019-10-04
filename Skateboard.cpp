//
// Created by Paul Santora
//

#include "Skateboard.h"
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    double mileage = ((rand() % 41 + 10) / 100) * time;
    if (time > 25 && time < 250)
    {
        int time_3 = time / 3;
        mileage += (rand() % time_3 + 1);
    }
    return mileage;
}
