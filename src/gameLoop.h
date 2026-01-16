#pragma once
#ifndef GAMELOOP_H_
#define GAMELOOP_H_

#include "commonFunc.h"
#include "sheep.h"

extern bool isRunning;

const int FPS = 60;
const int FRAME_DELAY = 1000 / FPS; 

extern std :: vector<Sheep*> sheepList;

extern Uint32 frameStart;
extern int frameTime;

void initFlock(std::vector<Sheep*>& flock, int numSheep); 
void cleanFlock(std :: vector<Sheep*>& flock);
int loop(); 



#endif