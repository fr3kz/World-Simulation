//
// Created by Artur on 14/01/2024.
//

#ifndef EVOLUTION_PREY_H
#define EVOLUTION_PREY_H

#include <vector>
#include "Plant.h"
class Prey {
public:
    int energy;
    Prey():energy(20){};
    void eat(std::vector<Prey>preys,std::vector<Plant>&plants);
    void reproduce(std::vector<Prey>preys,std::vector<Plant>&plants);

};


#endif //EVOLUTION_PREY_H
