//
// Created by Artur on 14/01/2024.
//

#ifndef EVOLUTION_SPECIES_H
#define EVOLUTION_SPECIES_H


#include "vector"


class Species {
public:
    virtual void eat() const;
    float health;
    float energy;

};


#endif //EVOLUTION_SPECIES_H
