//
// Created by VietAnh on 9/27/2024.
//

#ifndef GAME_CONSTANTS_H
#define GAME_CONSTANTS_H
#include <chrono>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
constexpr int FPS = 120;
constexpr std::chrono::microseconds FRAME_DURATION(1000000 / FPS);
constexpr int TILE_SIZE = 16;
constexpr double SCALE = 2.0f;
constexpr int TILE_IN_WIDTH = 40;
constexpr int TILE_IN_HEIGHT = 25;
constexpr int GAME_WIDTH = (int)(TILE_SIZE * SCALE) * TILE_IN_WIDTH;
constexpr int GAME_HEIGHT = (int)(TILE_SIZE * SCALE) * TILE_IN_HEIGHT;
#endif //GAME_CONSTANTS_H
