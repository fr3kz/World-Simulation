//
// Created by Artur on 15/01/2024.
//

#ifndef EVOLUTION_ANIMALS_H
#define EVOLUTION_ANIMALS_H

#include "Species.h"

class Animals: public Species {
public:
    virtual void eat();
    float helath;
    int predator_deadlist;
    int preys_deadlist;
};


#endif //EVOLUTION_ANIMALS_H
