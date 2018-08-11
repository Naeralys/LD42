#include "GameMap.hpp"

GameMap::GameMap( SDL_Renderer* renderer ) {
    this->renderer = renderer;
    rect.x = 0;
    rect.y = 0;
    rect.w = 800;
    rect.h = 800;
    _fps = 0;
};
void GameMap::Update() {
    _fps++;
    if( !(rect.w < 10) )  {
        if( _fps > 10) {
        _fps = 0;
        rect.x++;
        rect.y++;
        rect.w = rect.w - 2;
        rect.h = rect.h - 2;
        }
    }
}
void GameMap::Render() {
    SDL_SetRenderDrawColor( renderer, 158, 195, 255, 0);
    SDL_RenderFillRect( renderer, &rect );
}
void GameMap::Reset() {
    rect.x = 0;
    rect.y = 0;
    rect.w = 800;
    rect.h = 800;
}
bool GameMap::InRect( int x, int y ) {
    if( ( x < rect.x ) || ( x > ( 780 - rect.x ) ) || ( y < rect.y ) || ( y > ( 780 - rect.y ) ) ) {
        Reset();
        return true;
    }
    return false;
}