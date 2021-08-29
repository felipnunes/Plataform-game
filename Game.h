#pragma once

class Game {
    public:
        Game(sf::RenderWindow *mWindow);
        void run();
    private:
        void process_events();
        void update();
        void render();
    private:
                
    sf::RenderWindow *window;
    //Player player

};