//
// Created by Artur on 14/01/2024.
//

#include "Evolution.h"
#include <fmt/core.h>
#include <vector>
#include "Species.h"

void Evolution::simulate() {

    day = 1000;
    //20 days
    for (int i = 0; i < day; ++i) {

        for(auto &plant:plants){
            plant.grow();
            plant.reproduce(plants);
            break;
        }

        for(auto &prey:preys){
            prey.eat(preys,plants);
            prey.reproduce(preys,plants);
            break;
        }

        for(auto &pred:predators){
            pred.eat(preys,predators);
            pred.reproduce(predators);
            break;
        }

        /// check after each day

        if(!preys.empty()){
            preys_day = i;
        }

        if (!plants.empty()){
            plants_day = i;
        }

        if(!predators.empty()){
            predators_day = i;
        }


    }
}

void Evolution::show_data() {
    //number of plants
    int plants_number = static_cast<int>( plants.size());

    //ilosc energi u Flory max
    int max_energy=0;
    for (auto &plant:plants) {
        if(plant.energy >max_energy) max_energy=plant.energy;
    }
    //ilosc prey
    int preys_count = static_cast<int>(preys.size());

    //ilosc dni kiedy wyginely gatunki
    //Plant
    int plday;

    if(plants_day==-1){
        plday = day;
    }else{
        plday = plants_day+1;
    }

    //Prey
    int prday;

    if(preys_day==-1){
        prday = day;
    }else{
        prday = preys_day+1;
    }

    //Predators
    int predators_number = static_cast<int>( predators.size());
    int predday;
    if(predators_day==-1){
        predday = day;
    }else{
        predday = predators_day+1;
    }

    fmt::print("World's statistic");
    fmt::print("\n{} Plants", count_plants);
    fmt::print("\n{} Predators", count_predators);
    fmt::print("\n{} Prey",count_preys);


    fmt::print("\nWorlds population after {} days simulation",day);
    fmt::print("\n Plants survived {} / {}  ", plants_number,count_plants);
    fmt::print("\n Predators survived {} / {} ", predators_number,count_predators);
    fmt::print("\n Prey survived {} / {} ", preys_count,count_preys);



    fmt::print("\nWorlds survivors");
    fmt::print("\n Plants survived {} / {} days ", plday,day);
    fmt::print("\n Predators survived {} / {} days", predday,day);
    fmt::print("\n Prey survived {} / {} days", prday,day);









}

void Evolution::create_base_life() {
    for (int i = 0; i < count_plants; ++i) {

        plants.emplace_back();

    }
    for (int i = 0; i < count_preys; ++i) {

        preys.emplace_back();

    }
    for (int i = 0; i < count_predators; ++i) {

        predators.emplace_back();

    }
}



Evolution::Evolution() {
    count_plants = 1500;
    count_preys = 1000;
    count_predators = 2;
    create_base_life();
}
