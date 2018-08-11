#include "Player.hpp"
#include <iostream>

#define VELOCITY 0.001

Player::Player( SDL_Renderer *renderer ) {
    this->renderer = renderer;
    _x = 390;
    _y = 390;
    rect.x = _x;
    rect.y = _y;
    rect.w = 20;
    rect.h = 20;
    _velX = 0;
    _velY = 0;
    _score = 0;
    _velocity = 0.01;
}
void Player::Update() {
    _x += _velX;
    _y += _velY;

    rect.x = _x;
    rect.y = _y;
    _fps++;
    if( _fps > 20 ) {
        _fps = 0;
        UpdateScore();
    }
}
void Player::Render() {
    SDL_SetRenderDrawColor( renderer, 0, 0, 0, 0 );
    SDL_RenderFillRect( renderer, &rect );
}
void Player::UpdateScore() {
    if( _velX > 0 ) {
        _score += _velX;
    } else if( _velX < 0 ) {
        _score -= _velX;
    }
    if( _velY > 0 ) {
        _score += _velY;
    } else if( _velY < 0 ) {
        _score -= _velY;
    }
}
void Player::Reset() {
    std::cout << "Score: " << _score << std::endl;
    _x = 390;
    _y = 390;
    rect.x = _x;
    rect.y = _y;
    rect.w = 20;
    rect.h = 20;
    _velX = 0;
    _velY = 0;
    _score = 0;
}

void Player::SetVelX( float velocity ) {
    if( velocity > 0 ) {
        _velX += _velocity;
    } else if( velocity < 0 ) {
        _velX -= _velocity;
    }
}
void Player::SetVelY( float velocity ) {
    if( velocity > 0 ) {
        _velY += _velocity;
    } else if( velocity < 0 ) {
        _velY -= _velocity;
    }
}