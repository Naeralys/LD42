#include "Event.hpp"
#include <iostream>

Event::Event( bool *running, Player *player, GameMap *gameMap ) {
    _running = running;
    _player = player;
    _gameMap = gameMap;
}

void Event::Update() {
    while( SDL_PollEvent( &_event ) != 0 ) {
        if( _event.type == SDL_QUIT )
            *_running = false;
    }
    
    keyState = SDL_GetKeyboardState( NULL );

    // Player Movement
    if( keyState[ SDL_SCANCODE_W ] ) {
        _player->SetVelY( -1 );
    }
    if( keyState[ SDL_SCANCODE_S ] ) {
        _player->SetVelY( 1 );
    }
    if( keyState[ SDL_SCANCODE_A ] ) {
        _player->SetVelX( -1 );
    }
    if( keyState[ SDL_SCANCODE_D ] ) {
        _player->SetVelX( 1 );
    }
    MapCollision();
}
void Event::MapCollision() {
    if( _gameMap->InRect( _player->getPosX(), _player->getPosY() ) ) {
        _player->Reset();
    }
}