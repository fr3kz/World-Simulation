//
// Created by Artur on 15/01/2024.
//

#ifndef EVOLUTION_FLORA_H
#define EVOLUTION_FLORA_H


class Flora {
public:
    Flora(): bonus(1.00){};
    virtual void grow();
    float bonus;
};


#endif //EVOLUTION_FLORA_H
