#ifndef COMMONFUNC_H_
#define COMMONFUNC_H_

#include <istream>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

static SDL_Window* gWindow = NULL;
static SDL_Renderer* gRenderer = NULL;
static SDL_Event* gEvent;

const int WIDTH_WINDOW = 750;
const int HEIGHT_WINDOW = 750;

#endif