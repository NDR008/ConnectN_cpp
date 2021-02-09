#include "aiPlayer.h"
#include "board.h"

AiPlayer::AiPlayer(char passToken, std::string passName):Player(passToken, passName){
    srand(time(nullptr));
}

int AiPlayer::getUserInput(){
    int temp;
    bool searchMove = true;
    while (searchMove) {
        temp = rand() % (AiPlayer::maxWidth+1);
        for (int i=0; i < boardCopy.size(); i++){
            if (boardCopy[i][temp] == '.') { 
                searchMove = false;
            }
        }
        
    } 
    std::cout << "Choose your move " << name << ": " << temp << std::endl;
    return temp;
}

void AiPlayer::readBoard(const std::vector<std::vector<char>> &board){
    boardCopy = board;
    AiPlayer::maxWidth = board[0].size() - 1;
}