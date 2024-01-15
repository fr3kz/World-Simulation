//
// Created by Artur on 15/01/2024.
//

#ifndef EVOLUTION_PREDATORS_H
#define EVOLUTION_PREDATORS_H

#include "Animals.h"
#include "Prey.h"
#include "Plant.h"

class Predators: public Animals {
public:
    void eat(std::vector<Prey>&preys,std::vector<Predators>&predators);
    void reproduce(std::vector<Predators>&predators);

};


#endif //EVOLUTION_PREDATORS_H
