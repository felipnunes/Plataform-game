#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Constants.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(Constants::WINDOW_WIDTH, Constants::WINDOW_HEIGHT), "Rainbow Game");
    window.setFramerateLimit(Constants::FRAME_RATE);
    Game *game = new Game(&window);
    game->run();

    return 0;
}