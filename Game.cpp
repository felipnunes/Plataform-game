#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include <iostream>

Game::Game(sf::RenderWindow *mWindow) { 
    this->set_state_maneger();
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
    this->get_state_maneger().render(window);
    this->window->display();
}

void Game::set_state_maneger() {
    State_maneger *manegerAux = new State_maneger();
    this->maneger.push(*manegerAux);
    delete manegerAux;

    
}

State_maneger Game::get_state_maneger() {
    return this->maneger.top();
}