#ifndef GameMap_hpp
#define GameMap_hpp

#include "GameObject.hpp"
#include "SDL2/SDL.h"

class GameMap : public GameObject {
private:
    SDL_Rect rect;
    SDL_Renderer *renderer;
    int _fps;
public:
    GameMap( SDL_Renderer *renderer );
    void Update();
    void Render();
    void Reset();
    bool InRect( int x, int y );
};

#endif