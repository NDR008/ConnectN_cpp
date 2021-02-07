
#include "player.h"

Player::Player(char passToken, std::string passName){
    token = passToken;
    name = passName;
}

char Player::getToken(){
    return token;
}

std::string Player::getName(){
    return name;
}

void Player::incWins(){
    winCounter++;
}

int Player::getWins(){
    return winCounter;
}