//
// Created by Artur on 14/01/2024.
//

#ifndef EVOLUTION_PLANT_H
#define EVOLUTION_PLANT_H


#include <vector>

class Plant {

public:
    Plant(): energy(10){}
    void grow();
    void reproduce(std::vector<Plant>&plants);
    int energy;
};


#endif //EVOLUTION_PLANT_H
