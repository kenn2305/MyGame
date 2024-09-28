#include "Headers/Map.h"
Map::Map() {
    InitMap();
    InitMapData();
}
void Map::InitMap() {
    //INIT SOMETHING LIKE SPRITE AND MAP SHEET
    this->texture.loadFromFile("D:/Game/Source/Assets/tilesheet/ground.png");
    this->sprite.resize((this->texture.getSize().x / TILE_SIZE )* (this->texture.getSize().y / TILE_SIZE));
    // ..............
    // Loop for splite tile from sheet
    for (int i = 0 ; i < texture.getSize().y / TILE_SIZE  ; ++i){
        for ( int j = 0 ; j < texture.getSize().x / TILE_SIZE  ; ++j){
            //tempo spite :D
            sf::Sprite tmp;
            tmp.setTexture(this->texture);
            tmp.setTextureRect(sf::IntRect(TILE_SIZE*j,TILE_SIZE*i,TILE_SIZE,TILE_SIZE));
            //put into tile array
            this->sprite[i * (this->texture.getSize().x / TILE_SIZE) + j] = tmp;
        }
    }
}

void Map::DrawMap(sf::RenderWindow *window) {
    //Draw the map :D
    for ( int i = 0 ; i < TILE_IN_HEIGHT ; ++i){
        for ( int j = 0 ; j < TILE_IN_WIDTH ; ++j){
            int tile_index = this->map_data[i][j] - 1;
            this->sprite[tile_index].setScale(SCALE,SCALE);
            this->sprite[tile_index].setPosition(j*(TILE_SIZE*SCALE),i*(TILE_SIZE*SCALE));
            window->draw(this->sprite[tile_index]);
        }
    }
}

void Map::InitMapData() {
    //Init Map_Data with read .txt file :>
    std::ifstream file("D:/Game/Source/Assets/Map_data.txt");
    int rows = 0 ;
    std::string line;
    //It magic likee weeeeeeeeeeee
    while (std::getline(file,line)){
        int cols = 0 ;
        int value ;
        std::stringstream ss(line);
        while (ss >> value){
            //I'm lazy to write if coditions :D
            //This way is best :D
            if (cols > TILE_IN_WIDTH || rows > TILE_IN_HEIGHT) return;
            this->map_data[rows][cols++] = value;
        }
        rows++;
    }
}

