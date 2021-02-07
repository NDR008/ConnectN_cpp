#include "aiPlayer.h"

AiPlayer::AiPlayer(char passToken, std::string passName):Player(passToken, passName){
    srand(time(nullptr));
}

int AiPlayer::getUserInput(){
    int temp;
    temp = rand() % AiPlayer::maxWidth + 1;
    return temp;
}

void AiPlayer::readBoard(std::vector<std::vector<char>> board){
    AiPlayer::maxWidth = board[0].size() - 1;
}