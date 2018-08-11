#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include "SDL2/SDL.h"
#include "Event.hpp"
#include "GameObject.hpp"
#include "GameMap.hpp"
#include "Player.hpp"

class Game {
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    Event *event;
    bool _running;
    GameMap *gameMap;
    Player *player;
public:
    void Init();
    void Render();
    void Update();
    bool Running() { return _running; };
    void Quit();
};

#endif