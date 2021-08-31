#pragma once
#include "Splash_screen.hpp"
#include <stdlib.h>
#include <stack>

class State_maneger {
    public:
        State_maneger();
        ~State_maneger();
        
        std::stack<Splash_screen> splash;
        //outros states
        // std::stack<Splash_screen> splash;  
        // std::stack<Splash_screen> splash;  
        // std::stack<Splash_screen> splash;    
    private:
        unsigned int actual_state;
};