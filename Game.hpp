//
// Created by Gowtham Ravindrathas on 18/02/2021.
//

#ifndef ZOMBIE_GAME_GAME_H
#define ZOMBIE_GAME_GAME_H

#include "SDL2/SDL.h"
#include "iostream.h"

class Game {

public:
    Game();
    ~Game();

    void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    void handleEvents();
    void update();
    void render();
    void clean();

    bool running() { return isRunning(); }

private:
    bool isRunning();
    SDL_Window *window;
    SDL_Renderer *renderer;

};


#endif //ZOMBIE_GAME_GAME_H
