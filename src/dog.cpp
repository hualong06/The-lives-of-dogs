#include "dog.h"

Dog :: Dog() {
    x = 50;
    y = 50;
    dx = 10;
    dy = 10;
    width = 10;
    height = 10;
}

Dog :: ~Dog() {
    // nothing to free yet
}

void Dog :: setupDxDy(int dx_, int dy_) {
    dx = dx_;
    dy = dy_;
}

void Dog :: move(int vx, int vy) {
    x += vx;
    y += vy;

    if(x > WIDTH_WINDOW) x = WIDTH_WINDOW - width;
    if(x < 0) x = 0;
    if(y > HEIGHT_WINDOW) y = HEIGHT_WINDOW - height;
    if(y < 0) y = 0;
}

void Dog :: render() {
    // Draw dog as a filled rectangle
    SDL_Rect rect = { x, y, width, height };
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    SDL_RenderFillRect(gRenderer, &rect);
}
