//
// Created by Artur on 14/01/2024.
//

#ifndef EVOLUTION_PLANT_H
#define EVOLUTION_PLANT_H


#include <vector>
#include "Species.h"
#include "Flora.h"
class Plant: public Flora {

public:
    Plant(): energy(10){}
    void grow() override;
    void reproduce(std::vector<Plant>&plants);
    int energy;
};


#endif //EVOLUTION_PLANT_H
