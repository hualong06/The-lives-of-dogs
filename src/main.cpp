#include "commonFunc.h"

using namespace std;

const int FPS = 60;
const int FRAME_DELAY = 1000 / FPS; 

Uint32 frameStart;
int frameTime;

bool isRunning = true;

bool init() {
    bool suc = true;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "init SDL error: " << SDL_GetError() << endl;
        suc = false;
    } else {
        gWindow = SDL_CreateWindow("The lives of dogs", 0, 0, WIDTH_WINDOW, HEIGHT_WINDOW, SDL_WINDOW_SHOWN);
        if(gWindow == NULL) {
            cout << "create window error: " << SDL_GetError() << endl;
            suc = false;
        }
    }

    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    if(gRenderer == NULL) {
        cout << "create renderer error: " << SDL_GetError() << endl;
        suc = false;
    }
    return suc;
}

void clear() {
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    SDL_Quit();
}

int main(int argc, char* argv[]) {

    if(!init()) {
        return -1;
    }

    while(isRunning) {
        frameStart = SDL_GetTicks();

        SDL_SetRenderDrawColor(gRenderer, 30, 30, 30, 255); 
        SDL_RenderClear(gRenderer);

        // (Sau này ta sẽ gọi dog.render() ở đây)
        
        // Hiện hình
        SDL_RenderPresent(gRenderer);

        frameTime = SDL_GetTicks() - frameStart;
        if (FRAME_DELAY > frameTime) {
            SDL_Delay(FRAME_DELAY - frameTime);
        }
    }

    clear();

    return 0;
}