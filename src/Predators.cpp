//
// Created by Artur on 15/01/2024.
//

#include "Predators.h"

void Predators::eat(std::vector<Prey>&preys,std::vector<Predators>&predators) {
    //TODO: funkcja ktora okresla co zje predator czy innego predatora czy prey

    if (!preys.empty()){
        preys.erase(preys.begin());
        energy+=3;
    }else{
        predators.erase(predators.begin());
    }
}

void Predators::reproduce(std::vector<Predators> &predators) {
    for (auto predator:predators) {
        if(predator.energy > 18){
            predators.emplace_back();
        }
    }
}
