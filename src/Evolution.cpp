//
// Created by Artur on 14/01/2024.
//

#include "Evolution.h"

#include <vector>
#include "Species.h"
#include <iostream>

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
        plday = plants_day;
    }

    //Prey
    int prday;

    if(preys_day==-1){
        prday = day;
    }else{
        prday = preys_day;
    }

    //Predators
    int predators_number = static_cast<int>( predators.size());
    int predday;
    if(predators_day==-1){
        predday = day;
    }else{
        predday = predators_day;
    }


    std::cout << "Tyle jest prey " << preys_count << std::endl;
    std::cout << "Tyle jest plantow " << plants_number << std::endl;
    std::cout << "Tyle jest drapieznikow " << predators_number << std::endl;


    std::cout << plday << " / " << day << " Dni zycia plantow"<< std::endl;
    std::cout << prday << " / " << day << " Dni zycia prey"<< std::endl;
    std::cout << predday << " / " << day << " Dni zycia drapieznika"<< std::endl;






}

void Evolution::create_base_life() {
    for (int i = 0; i < 500; ++i) {

        plants.emplace_back();

    }
    for (int i = 0; i < 100; ++i) {

        preys.emplace_back();

    }
    for (int i = 0; i < 5; ++i) {

        predators.emplace_back();

    }
}



Evolution::Evolution() {
    create_base_life();
}
