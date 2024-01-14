//
// Created by Artur on 14/01/2024.
//

#ifndef EVOLUTION_SPECIES_H
#define EVOLUTION_SPECIES_H

#include "Plant.h"
#include "Prey.h"
#include "vector"
class Species {
public:
    std::vector<Plant> plants;
    std::vector<Prey> preys;

};


#endif //EVOLUTION_SPECIES_H
