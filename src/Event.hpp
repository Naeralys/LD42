#ifndef Event_hpp
#define Event_hpp

#include "SDL2/SDL.h"
#include "Player.hpp"
#include "GameMap.hpp"

class Event {
private:
    SDL_Event _event;
    bool *_running;
    const Uint8 *keyState;
    Player *_player;
    GameMap *_gameMap;
    int _msg;
public:
    Event( bool *running, Player *player, GameMap *gameMap );
    void Update();
    void MapCollision();
};

#endif