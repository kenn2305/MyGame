#ifndef GAME_PHYSICS_H
#define GAME_PHYSICS_H
#include <cmath>
#include <algorithm>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include "../Headers/Constants.h"
class Physics {
private:
    //Horizontal speed;
    float speed = 0;
    float lim_accelerate = HORIZONTAL_SPEED;
public:
    void Horizontal_movement(sf::Sprite *player , int *direction , int *moving);
};


#endif //GAME_PHYSICS_H
