#include "sheep.h"

Sheep :: Sheep(int x_, int y_) {
    x = x_;
    y = y_;
    dx = 10;
    dy = 10;
    radius = 5;
    width = 10;
    height = 10;

}

Sheep :: ~Sheep() {

}

void Sheep :: setupDxDy(int dx_, int dy_) {
    dx = dx_;
    dy = dy_;
}

void Sheep :: move(int vx, int vy) {
    x += vx;
    y += vy;

    if(x > WIDTH_WINDOW) x = WIDTH_WINDOW - width;
    if(x < 0) x = 0;
    if(y > HEIGHT_WINDOW) y = HEIGHT_WINDOW - height;
    if(y < 0) y = 0;
}

void Sheep :: render() {
    SDL_Rect rect = { x, y, width, height };
    SDL_SetRenderDrawColor(gRenderer, 0, 120, 0, 255);
    SDL_RenderFillRect(gRenderer, &rect);
}