#include "State_maneger.hpp"
#include "Splash_screen.hpp"
#include "Constants.hpp"
#include <iostream>
 
State_maneger::State_maneger() {
    this->addState("splash");
    
}

State_maneger::~State_maneger() {
    std::cout << "\n maneger deleted \n";
}

void State_maneger::addState(std::string state) {
    if(state == "splash") {
        Splash_screen *splashAux = new Splash_screen();
        this->splash.push(*splashAux);
        delete splashAux;
    }
    //other states here...
    //
    //
    //
    //
    //
    //
}

void State_maneger::render(sf::RenderWindow *window) {
    if(this->actual_state == "splash") {
        this->splash.top().render(window);
    }
}

std::string State_maneger::get_actual_state() {
    return this->actual_state;
}