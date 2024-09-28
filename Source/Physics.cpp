#include "Headers/Physics.h"

void Physics::Horizontal_movement(sf::Sprite *player , int *direction , int *moving) {
    if((*moving)){
        this->speed += (ACCELERATE * delta_time * (*direction));
    }
    this->lim_accelerate = (HORIZONTAL_SPEED * (*direction));
    if ((this->speed > 0 && this->speed >= this->lim_accelerate) ||
         this->speed < 0 && this->speed <= this->lim_accelerate){
         this->speed = this->lim_accelerate;
    }
    if (!(*moving)){
        if (this->speed > 0){
            this->speed -= (DRAG * delta_time);
            if (this->speed < 0) this->speed = 0 ;
        } else if (this->speed < 0){
            this->speed += (DRAG * delta_time);
            if (this->speed > 0) this->speed = 0 ;
        }
    }
    player->move(this->speed,0);
}

