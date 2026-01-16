#include "input.h"
#include "gameLoop.h"
#include "dog.h"

void handleEvent() {
    SDL_Event e;
    while(SDL_PollEvent(&e)) {
        if(e.type == SDL_QUIT) {
            isRunning = false;
        }
    }
}

void handlePlayerInput() {
    dog.setDx(0);
    dog.setDy(0);

    const Uint8* state = SDL_GetKeyboardState(NULL);

    if(state[SDL_SCANCODE_A]) {
        dog.setDx(-dog.getSpeed());
    }
    if(state[SDL_SCANCODE_D]) {
        dog.setDx(dog.getSpeed());
    }
    if(state[SDL_SCANCODE_W]) {
        dog.setDy(-dog.getSpeed());
    }
    if(state[SDL_SCANCODE_S]) {
        dog.setDy(dog.getSpeed());
    }

    dog.move(dog.getDx(), dog.getDy());
}