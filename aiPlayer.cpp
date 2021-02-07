#include "aiPlayer.h"

AiPlayer::AiPlayer(char passToken, std::string passName){
    token = passToken;
    name = passName;
    srand(time(nullptr));
}

int AiPlayer::getUserInput(){
    int temp =  (rand());
    //cout << "Choose your move " << getName() << ": ";
    std::cout << "Choose your move " << name << ": ";
    std::cin >> temp;
    return temp;
}

void AiPlayer::readBoard(std::vector<std::vector<char>> board){
    maxWidth = board[0].size();
    std::cout << maxWidth;
}