#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "Constants.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(Constants::WINDOW_WIDTH, Constants::WINDOW_HEIGHT), "Rainbow Game");
    window.setFramerateLimit(Constants::FRAME_RATE);
    Game *game = new Game(&window);
    game->run();

    return 0;
}

//g++ -c main.cpp Game.cpp State_maneger.cpp Splash_screen.cpp && g++ main.o Game.o State_maneger.o Splash_screen.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio && ./sfml-app