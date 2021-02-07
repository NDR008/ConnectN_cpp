#include "player.h"
#include <iostream>

Player::Player(char passToken, std::string passName){
    token = passToken;
    name = passName;
    std::cout << "parent " << std::endl;
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