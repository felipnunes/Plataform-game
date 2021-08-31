#pragma once
#include "State_maneger.hpp"
#include <stdlib.h>
#include <stack>

class Game {
    public:
        Game(sf::RenderWindow *mWindow);
        void run();
        void set_state_maneger();
        State_maneger get_state_maneger();
    private:
        void process_events();
        void update();
        void render();
    private:
        std::stack<State_maneger> maneger;
        sf::RenderWindow *window;
    //Player player

};