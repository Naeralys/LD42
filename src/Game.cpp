#include "Game.hpp"

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 800;

void Game::Init() {
    window = SDL_CreateWindow( "LDJAM42", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, false );
    renderer = SDL_CreateRenderer( window, -1, 0 );
    _running = true;
    gameMap = new GameMap( renderer );
    player = new Player( renderer );
    event = new Event( &_running, player, gameMap );
}
void Game::Update() {
    event->Update();
    gameMap->Update();
    player->Update();
}
void Game::Render() {
    SDL_SetRenderDrawColor( renderer, 100, 0, 0, 0 );
    SDL_RenderClear( renderer );

    gameMap->Render();
    player->Render();

    SDL_RenderPresent( renderer );
}
void Game::Quit() {
    _running = false;
}