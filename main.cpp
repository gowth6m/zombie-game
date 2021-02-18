#include <iostream>
#include "Game.hpp"

Game *game = nullptr;

int main() {
    std::cout << "Hello, World!" << std::endl;

    game = new Game();

    game->init("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    while (game->running()) {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}
