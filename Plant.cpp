//
// Created by Artur on 14/01/2024.
//

#include "Plant.h"
#include <vector>
#include <iostream>

void Plant::grow() {

    energy+=2;

    float e = static_cast<float>(energy) * bonus;
    energy = static_cast<int>(e);
}

void Plant::reproduce(std::vector<Plant>&plants) {
    for (auto plant: plants) {
           if(plant.energy>15){
               plants.emplace_back();
           }
    }
}

