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

int Player::getUserInput(){std::cout << "I am " << name; return -1;}
// void Player::readBoard(std::vector<std::vector<char>> board){}