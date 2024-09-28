#ifndef GAME_MAP_H
#define GAME_MAP_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include <array>
#include "Constants.h"
class Map{
private:
    sf::Texture texture;
    std::vector<sf::Sprite> sprite;
    //Save map in 2D array :DD
    //Lmao lmao
    int map_data[TILE_IN_HEIGHT][TILE_IN_WIDTH];
public:
    Map();
    void InitMap();
    void DrawMap(sf::RenderWindow *window);
    void InitMapData();
};
#endif //GAME_MAP_H
