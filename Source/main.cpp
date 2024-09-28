#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Headers/Constants.h"
#include "Headers/Player.h"
#include "Headers/Map.h"
int main(){
    std::chrono::microseconds lag(0);
    std::chrono::steady_clock::time_point previous_time = std::chrono::steady_clock::now();
    sf::RenderWindow window(sf::VideoMode(GAME_WIDTH,GAME_HEIGHT),"Kenn Game",sf::Style::Close);
    window.requestFocus();
    sf::Event event;
    Player player;
    Map map;
    while (window.isOpen()){
        std::chrono::microseconds delta_time = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - previous_time);
        lag+=delta_time;
        previous_time+=delta_time;
        while (lag >= FRAME_DURATION){
            lag -= FRAME_DURATION;
            while (window.pollEvent(event)){
                switch (event.type) {
                    case sf::Event::Closed:
                    {
                        window.close();
                        break;
                    }
                    case sf::Event::KeyPressed:
                    {
                        if (event.key.code == sf::Keyboard::Escape){
                            window.close();
                            break;
                        }
                    }
                }
            }
            player.Input_Manager();
            player.UpdatePos();
            //for Update logic , movement , collision , etc
            if (lag < FRAME_DURATION){
                //Render or Draw something
                window.clear();
                player.DrawPlayer(&window);
                map.DrawMap(&window);
                window.display();
            }
        }
    }
}