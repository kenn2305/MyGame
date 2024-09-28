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
//FPS
constexpr int FPS = 120;
constexpr std::chrono::microseconds FRAME_DURATION(1000000 / FPS);
constexpr int TILE_SIZE = 16;
constexpr double SCALE = 2.0f;
constexpr float delta_time = 1.0 / FPS ;
//WINDOW SIZE
constexpr int TILE_IN_WIDTH = 40;
constexpr int TILE_IN_HEIGHT = 25;
constexpr int GAME_WIDTH = (int)(TILE_SIZE * SCALE) * TILE_IN_WIDTH;
constexpr int GAME_HEIGHT = (int)(TILE_SIZE * SCALE) * TILE_IN_HEIGHT;
//PHYSICS
constexpr float GRAVITY = 2.5f;
constexpr float VERTICAL_SPEED = 2.5f;
constexpr float HORIZONTAL_SPEED = 3.f;
constexpr float ACCELERATE = 2.5f;
constexpr float DRAG = 8.5f;
constexpr float JUMP_SPEED = -4.0f;
//SOMETHING
constexpr int RIGHT = 1;
constexpr int LEFT = -1;
constexpr int TRUE = 1;
constexpr int FALSE = 0 ;
#endif //GAME_CONSTANTS_H
