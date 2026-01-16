#include "gameLoop.h"
#include "input.h"
#include "ui.h"
#include "dog.h"

Dog dog;

bool isRunning = false;
Uint32 frameStart = 0;
int frameTime = 0;

std :: vector<Sheep*> sheepList;

void initFlock(std::vector<Sheep*>& flock, int numSheep) {
    for(int i = 0; i < numSheep; i++) {
        int randX = rand() % (WIDTH_WINDOW - 50) + 25;  
        int randY = rand() % (HEIGHT_WINDOW - 50) + 25;
        Sheep* sheep = new Sheep(randX, randY);

        flock.push_back(sheep);
        std :: cout << "ok" << std :: endl;
    }
}

void cleanFlock(std :: vector<Sheep*>& flock) {
    for(int i = 0; i < flock.size(); i++) {
        if(flock[i] != NULL) {
            delete flock[i];
            flock[i] = NULL;
        }
    }
    flock.clear();
}

int loop() {
    isRunning = true;

    initFlock(sheepList, 5);

    while(isRunning) {
        frameStart = SDL_GetTicks();

        handleEvent();
        handlePlayerInput();

        render();

        frameTime = SDL_GetTicks() - frameStart;
        if (FRAME_DELAY > frameTime) {
            SDL_Delay(FRAME_DELAY - frameTime);
        }
    }

    cleanFlock(sheepList);
    return 0;
}