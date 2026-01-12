#include "gameLoop.h"
#include "input.h"
#include "ui.h"
#include "dog.h"

Dog dog;

bool isRunning = false;
Uint32 frameStart = 0;
int frameTime = 0;

int loop() {
    isRunning = true;

    while(isRunning) {
        frameStart = SDL_GetTicks();

        handleEvent();
        render();

        frameTime = SDL_GetTicks() - frameStart;
        if (FRAME_DELAY > frameTime) {
            SDL_Delay(FRAME_DELAY - frameTime);
        }
    }
    return 0;
}