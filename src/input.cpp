#include "input.h"
#include "gameLoop.h"
#include "dog.h"

void handleEvent() {
    SDL_Event e;
    while(SDL_PollEvent(&e)) {
        if(e.type == SDL_QUIT) isRunning = false;

        const Uint8* state = SDL_GetKeyboardState(NULL);
        if(state[SDL_SCANCODE_A])  dog.move(-dog.getDx(), 0);
        if(state[SDL_SCANCODE_D])  dog.move(dog.getDx(), 0);
        if(state[SDL_SCANCODE_W])  dog.move(0, -dog.getDy());
        if(state[SDL_SCANCODE_S])  dog.move(0, dog.getDy());
    }
}