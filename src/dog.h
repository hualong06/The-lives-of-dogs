#pragma once
#ifndef DOG_H_
#define DOG_H_

#include "commonFunc.h"

class Dog {
    private:
        int x, y;
        int width;
        int height;
        int dx, dy;
        int speed;
        int radius;
        SDL_Texture* texture;
    public:
        Dog();
        ~Dog();

        int getX() { return x; }
        int getY() { return y; }
        int getSpeed() { return speed; }
        void setSpeed(int speed_) { speed = speed_; }

        void setDx(int dx_) { dx = dx_; }
        void setDy(int dy_) { dy = dy_; }
        int getDx() { return dx; }
        int getDy() { return dy; }

        bool loadTexture(const std :: string& path);
        void render();
        void move(int vx, int vy);
};

extern Dog dog;

#endif