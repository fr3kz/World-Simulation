//
// Created by Artur on 14/01/2024.
//

#ifndef EVOLUTION_EVOLUTION_H
#define EVOLUTION_EVOLUTION_H
#include "Plant.h"
#include "Prey.h"
#include "Species.h"
#include "Predators.h"
#include "Animals.h"

class Evolution {

public:
    Evolution();
    void simulate();
    void show_data();
    void create_base_life();
    std::vector<Plant>plants;
    std::vector<Prey> preys;
    std::vector<Predators>predators;
    int plants_day=-1;
    int count_plants;
    int preys_day=-1;
    int count_preys;
    int predators_day=-1;
    int count_predators;
    int day;

};


#endif //EVOLUTION_EVOLUTION_H
