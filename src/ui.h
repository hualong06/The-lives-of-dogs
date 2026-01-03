#ifndef UI_H_
#define UI_H_

#include "commonFunc.h"

class BaseObject {
    private:
        SDL_Texture* texture;
        SDL_Rect rect;
    public:
        BaseObject();
        ~BaseObject();

        void setRect(const int& x, const int& y);
        SDL_Rect getRect();
        SDL_Texture* getObject();

        bool LoadImg(std :: string path, SDL_Renderer* renderer);
        void Render(SDL_Renderer* renderer, const SDL_Rect* clip = NULL);
};

#endif