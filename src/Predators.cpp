//
// Created by Artur on 15/01/2024.
//

#include "Predators.h"

void Predators::eat(std::vector<Prey>&preys,std::vector<Predators>&predators) {
    //sprawdzenie czy zyja preys do jedzenia

    if (!preys.empty()){
        preys.erase(preys.begin());
        energy+=3;
    }else{
        predators.erase(predators.begin());
        energy =-1;
    }
}

void Predators::reproduce(std::vector<Predators> &predators) {
    for (auto predator:predators) {
        if(predator.energy > 25){
            predators.emplace_back();
        }
    }
}
