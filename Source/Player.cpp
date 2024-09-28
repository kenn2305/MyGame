#include "Headers/Player.h"

Player::Player() {
    InitPlayer();
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
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        this->sprite.move(10.5, 0);
    }
}
