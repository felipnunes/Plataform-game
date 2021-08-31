#pragma once
#include <SFML/Graphics.hpp>


class Splash_screen {
    public:
        Splash_screen();
        ~Splash_screen();
        int i;
    private:
        sf::Texture iconT;
        sf::Sprite icon;

};