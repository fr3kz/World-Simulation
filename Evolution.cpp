//
// Created by Artur on 14/01/2024.
//

#include "Evolution.h"

#include <vector>
#include "Species.h"
#include <iostream>

void Evolution::simulate() {

    day = 100;
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

        /// check after each day

        if(!preys.empty()){
            preys_day = i;
        }

        if (!plants.empty()){
            plants_day = i;
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

    std::cout << "Tyle jest prey " << preys_count << std::endl;
    std::cout << "Tyle jest plantow " << plants_number << std::endl;
    std::cout << "To jest max energia u planta" << max_energy << std::endl;
    std::cout << plday << " / " << day << " Dni zycia plantow"<< std::endl;
    std::cout << prday << " / " << day << " Dni zycia prey"<< std::endl;





}

void Evolution::create_base_life() {
    for (int i = 0; i < 10; ++i) {

        plants.emplace_back();

    }
    for (int i = 0; i < 50; ++i) {

        preys.emplace_back();

    }
}

void Evolution::delete_plant() {
    if((!plants.empty())&& (plants.size() >1)){
        plants.erase(plants.begin());
    }

}

Evolution::Evolution() {
    create_base_life();
}
