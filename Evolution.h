//
// Created by Artur on 14/01/2024.
//

#ifndef EVOLUTION_EVOLUTION_H
#define EVOLUTION_EVOLUTION_H
#include "Plant.h"
#include "Species.h"

class Evolution {

public:
    Evolution();
    void simulate();
    void show_data();
    void create_base_life();
    void delete_plant();
    std::vector<Plant>plants;
    std::vector<Prey> preys;
};


#endif //EVOLUTION_EVOLUTION_H
