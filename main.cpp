#include <iostream>
#include <vector>
#include <memory>
#include "board.h"
#include "player.h"
#include "humanPlayer.h"
#include "aiPlayer.h"

#define TotalPlayers 3

int main(){
    RectBoard board(7,7);
    
    board.initBoard();

    std::vector<std::unique_ptr<Player>> players;
    players.resize(TotalPlayers);

    players[0]  = std::make_unique<HumanPlayer>('U', "Player 1");
    players[1]  = std::make_unique<AiPlayer>('P', "Pixel");
    players[2]  = std::make_unique<AiPlayer>('D', "danhans42");
    //players[3]  = std::make_unique<AiPlayer>('X', "Skitchin");
    //players[4]  = std::make_unique<AiPlayer>('G', "Peach");

    int nextPlayer = 0;
    board.displayBoard();
        while (true) {
        players[nextPlayer]->readBoard(board.getCopyOfBoard());  
        while (!board.makeMove(players[nextPlayer]->getUserInput(),players[nextPlayer]->getToken()));  
        if(board.checkWin(players[nextPlayer]->getToken())) { 
            board.displayBoard();
            std::cout << "Player " << players[nextPlayer]->getName() << " won!!!" << std::endl;
            break;
        }
        if(!board.canMove()) {
            board.displayBoard();
            std::cout << "Nobody won" << std::endl;
            break;
        }
        std::cout << std::endl;
        board.displayBoard();
        nextPlayer++;
        if (nextPlayer > TotalPlayers-1) { nextPlayer = 0; }
    }
    return 0;
}
