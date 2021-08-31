#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>


class Splash_screen {
    public:
        Splash_screen();
        ~Splash_screen();
        void init();
        void update();
        void render(sf::RenderWindow *window);

        void set_background_texture(std::string fileName);
        void set_background(sf::Texture backgroundTexture);
    private:
        sf::Texture backgroundTexture;
        sf::Sprite background;
        sf::SoundBuffer SplashSoundBuffer;
        sf::Sound splashSound;

};