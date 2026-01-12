#ifndef DOG_H_
#define DOG_H_

#include "commonFunc.h"

class Dog {
    private:
        int x, y;
        int width;
        int height;
        int dx, dy;
        SDL_Texture* texture;
    public:
        Dog();
        ~Dog();

        int getX() { return x; }
        int getY() { return y; }
        void setX(int x_) { x = x_; }
        void setY(int y_) { y = y_; }

        void setupDxDy(int dx_, int dy_);
        int getDx() { return dx; }
        int getDy() { return dy; }

        bool loadTexture(const std :: string& path);
        void render();
        void move(int vx, int vy);
};

extern Dog dog;

#endif