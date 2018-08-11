#ifndef Game_hpp
#define Game_hpp

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class Game {
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    int _running;
public:
    void Init();
    void Render();
    void Update();
    bool Running() { return _running; };
};

#endif