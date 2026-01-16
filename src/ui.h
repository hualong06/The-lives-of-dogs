#pragma once
#ifndef UI_H_
#define UI_H_

#include "commonFunc.h"
#include "sheep.h"
#include <vector>

void render();
void renderSheepFlock(std :: vector<Sheep*>& flock);

#endif