//
// Created by Artur on 14/01/2024.
//

#ifndef EVOLUTION_PREY_H
#define EVOLUTION_PREY_H

#include <vector>
#include "Plant.h"
#include "Species.h"
#include "Animals.h"

class Prey: public Animals{
public:
    Prey(): health(10){};
    virtual void eat(std::vector<Prey>&preys,std::vector<Plant>&plants);
    virtual void reproduce(std::vector<Prey>&preys,std::vector<Plant>&plants);
    float health;
};


#endif //EVOLUTION_PREY_H
