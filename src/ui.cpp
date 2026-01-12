#include "ui.h"
#include "dog.h"
#include "gameLoop.h"

void render() {
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    SDL_RenderClear(gRenderer);

    dog.render();
    SDL_RenderPresent(gRenderer);
} 