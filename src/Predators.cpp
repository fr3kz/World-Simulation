//
// Created by Artur on 15/01/2024.
//

#include "Predators.h"
#include <iostream>

void Predators::eat(std::vector<Prey>&preys,std::vector<Predators>&predators) {

    //decide what to eat
    float predator_chance = 0.4;
    srand(static_cast<unsigned>(time(nullptr)));
    float chance = static_cast<float>(rand()) / RAND_MAX;

    if (chance < predator_chance) {
        if (!predators.empty()) {
            predators.erase(predators.begin());
            energy += 1;
            std::cout << "Predator ate another predator.\n";
        } else {
            std::cout << "No predators available to eat.\n";
        }
    } else {
        if (!preys.empty()) {
            preys.erase(preys.begin());
            energy += 2;
            std::cout << "Predator ate a prey.\n";
        } else {
            std::cout << "No preys available to eat.\n";
        }
    }
}

void Predators::reproduce(std::vector<Predators> &predators) {
    for (auto predator:predators) {
        if(predator.energy > 18){
            predators.emplace_back();
        }
    }
}
