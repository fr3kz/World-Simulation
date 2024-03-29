//
// Created by Artur on 14/01/2024.
//

#include "Prey.h"
#include <vector>
#include "Plant.h"

void Prey::eat(std::vector<Prey>&preys,std::vector<Plant>&plants) {

    if(!plants.empty()){
        plants.erase(plants.begin());
    }else{
        preys.erase(preys.begin());
        preys_deadlist++;
    }

}

void Prey::reproduce(std::vector<Prey>&preys, std::vector<Plant> &plants) {
    for (auto prey: preys) {
        if(prey.energy>16){
            plants.emplace_back();
        }
    }

}
