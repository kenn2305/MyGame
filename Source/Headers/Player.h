#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include "../Headers/Constants.h"
#include "../Headers/Physics.h"
class Player{
private:
    Physics physics;
    sf::Texture texture;
    sf::Sprite sprite;
    //ACTION
    int moving;
    bool move_left;
    bool move_right;
    int dir;
public:
    Player();
    void InitPlayer();
    void InitIndex();
    void UpdatePos();
    void DrawPlayer(sf::RenderWindow *window);
    void Input_Manager();
};
#endif //GAME_PLAYER_H
