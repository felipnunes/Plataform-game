#pragma once
#include "State_maneger.hpp"
#include <stdlib.h>

class Game {
    public:
        Game(sf::RenderWindow *mWindow);
        void run();
        State_maneger *maneger;
    private:
        void process_events();
        void update();
        void render();
    private:
        sf::RenderWindow *window;
    //Player player

};