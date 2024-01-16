#include <iostream>
#include "Evolution.h"

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));


    Evolution evolution;

    evolution.simulate();
    evolution.show_data();
    return 0;
}
