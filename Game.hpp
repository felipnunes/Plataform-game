#pragma once
#include "State_maneger.hpp"
#include <stdlib.h>

class Game {
    public:
        Game(sf::RenderWindow *mWindow);
        void run();
    private:
        void process_events();
        void update();
        void render();
    private:
        State_maneger maneger();
        sf::RenderWindow *window;
    //Player player

};