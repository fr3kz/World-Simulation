//
// Created by Artur on 14/01/2024.
//

#include "Evolution.h"

#include <vector>
#include "Species.h"
#include <iostream>

void Evolution::simulate() {

    //10 days
    for (int i = 0; i < 10; ++i) {


        //each species implement here
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






    }
}

void Evolution::show_data() {
    //number of plants
    int plants_number = static_cast<int>( plants.size());

    //ilosc energi max
    int max_energy=0;
    for (auto &plant:plants) {
        if(plant.energy >max_energy) max_energy=plant.energy;
    }
    //ilosc prey
    int preys_count = static_cast<int>(preys.size());

    std::cout << "Tyle jest prey " << preys_count << std::endl;

    std::cout << "Tyle jest plantow " << plants_number << std::endl;
    std::cout << "To jest max energia" << max_energy;



}

void Evolution::create_base_life() {
    for (int i = 0; i < 100; ++i) {

        plants.emplace_back();

    }
    for (int i = 0; i < 10; ++i) {

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
