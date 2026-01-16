#include "ui.h"
#include "gameLoop.h"
#include "dog.h"
#include "sheep.h"

void renderSheepFlock(std :: vector<Sheep*>& flock) {
    for(int i = 0; i < flock.size(); i++) {
        if(flock[i] != NULL) {
            flock[i]->render();
        }
    }
}

void render() {
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    SDL_RenderClear(gRenderer);

    renderSheepFlock(sheepList);
    dog.render();
    SDL_RenderPresent(gRenderer);
} 
