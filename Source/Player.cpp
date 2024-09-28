#include "Headers/Player.h"

Player::Player() {
    InitPlayer();
    InitIndex();
}

void Player::InitPlayer() {
    this->texture.loadFromFile("D:/Game/Source/Assets/Sprites/IDLE.png");
    this->sprite.setTexture(this->texture);
    this->sprite.setTextureRect(sf::IntRect(93, 0, -93, 112));
    this->sprite.setScale(SCALE, SCALE);
}
void Player::DrawPlayer(sf::RenderWindow *window) {
    window->draw(this->sprite);
}

void Player::UpdatePos() {
    this->physics.Horizontal_movement(&this->sprite , &this->dir , (&this->moving));
}

void Player::Input_Manager() {
    //Input check
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        this->move_right = true;
    } else {
        this->move_right = false;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        this->move_left = true;
    } else {
        this->move_left = false;
    }
    //set moving
    if (!this->move_left && this->move_right){
        this->dir = RIGHT;
        this->moving = true;
    } else if (!this->move_right && this->move_left){
        this->dir = LEFT;
        this->moving = true;
    } else {
        this->moving = false;
    }
}

void Player::InitIndex() {
    this->moving = false;
    this->dir = RIGHT;
}
