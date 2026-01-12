#include "commonFunc.h"
#include "gameLoop.h"

using namespace std;

bool init() {
    bool suc = true;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "init SDL error: " << SDL_GetError() << endl;
        suc = false;
    } else {
        gWindow = SDL_CreateWindow("The lives of dogs", 100, 100, WIDTH_WINDOW, HEIGHT_WINDOW, SDL_WINDOW_SHOWN);
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

    loop();

    clear();

    return 0;
}