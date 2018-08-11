#ifndef Player_hpp
#define Player_hpp

#include "GameObject.hpp"
#include "SDL2/SDL.h"

class Player : public GameObject {
private:
    SDL_Rect rect;
    SDL_Renderer *renderer;
    float _velX, _velY, _x, _y; 
    float _score;
    int _fps;
    float _velocity;
public:
    Player( SDL_Renderer *renderer );
    void Update();
    void Render();
    void UpdateScore();
    void Reset();

    // Properties for velocity
    void SetVelX( float velocity );
    void SetVelY( float velocity );
    float getVelX() { return _velX; };
    float getVelY() { return _velY; };

    // Properties for position
    int getPosX() { return rect.x; };
    int getPosY() { return rect.y; };
};

#endif