#pragma once
#include "Splash_screen.hpp"
#include <stdlib.h>
#include <stack>
#include <string>
class State_maneger {
    public:
        State_maneger();
        ~State_maneger();
        void addState(std::string state);
        void render(sf::RenderWindow *window);
        std::string get_actual_state();
        
    private:
        std::stack<Splash_screen> splash;
        //outros states
        // std::stack<Splash_screen> splash;  
        // std::stack<Splash_screen> splash;  
        // std::stack<Splash_screen> splash;    
        std::string actual_state;
};