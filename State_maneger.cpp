#include "State_maneger.hpp"
#include "Splash_screen.hpp"
#include <iostream>

State_maneger::State_maneger() {
    Splash_screen *splashAux = new Splash_screen();
    this->splash.push(*splashAux);
    delete splashAux;
    
}

State_maneger::~State_maneger() {
    std::cout << "\n maneger deleted \n";
}