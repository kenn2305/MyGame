#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include "../Headers/Constants.h"
class Player{
private:
    sf::Texture texture;
    sf::Sprite sprite;
public:
    Player();
    void InitPlayer();
    void UpdatePos();
    void DrawPlayer(sf::RenderWindow *window);
};
#endif //GAME_PLAYER_H
