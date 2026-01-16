#pragma once
#ifndef SHEEP_H_
#define SHEEP_H

#include "commonFunc.h"

class Sheep {
    private:
        int x, y;
        int radius;
        int dx, dy;
        int width;
        int height;

        SDL_Texture* texture;
    public:
        Sheep(int x_, int y_);
        ~Sheep();

        int getX() { return x; }
        int getY() { return y; }
        int getDx() { return dx; }
        int getDy() {return dy; }
        void setupDxDy(int dx_, int dy_);
        
        void move(int vx, int vy);
        void render();
};

extern Sheep sheep;

#endif
