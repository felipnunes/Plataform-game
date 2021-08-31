#include "Splash_screen.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
Splash_screen::Splash_screen() {
    
}

Splash_screen::~Splash_screen() {
    std::cout << "\n splash deletado \n";
}

void Splash_screen::init() {
    this->set_background_texture("assets/splash/frametest.png");
    this->set_background(this->backgroundTexture);
}

void Splash_screen::render(sf::RenderWindow *window) {
    window->draw(this->background);
}

void Splash_screen::set_background_texture(std::string fileName) {
    this->backgroundTexture.loadFromFile(fileName);
}

void Splash_screen::set_background(sf::Texture backgroundTexture) {
    this->background.setTexture(backgroundTexture);
}
