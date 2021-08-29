#include <SFML/Graphics.hpp>
#include "Game.h"

Game::Game(sf::RenderWindow *mWindow) { 

    this->window = mWindow;
    
}

void Game::run() {
    while(this->window->isOpen()) {
        this->process_events();
        this->update();
        this->render();

    }
}

void Game::process_events() {
    sf::Event event;
    while(this->window->pollEvent(event)) {

        if(event.type == sf::Event::Closed) {
                this->window->close();
        }

    }
}

void Game::update() {

}

void Game::render() {

    this->window->clear();
    //draw function here
    this->window->display();
}
