#include <iostream>
#include <vector>
#include <memory>
#include "board.h"
#include "player.h"
#include "humanPlayer.h"
#include "aiPlayer.h"

using namespace std;

int main(){
    RectBoard board(4,5);
    board.initBoard();
    vector<std::unique_ptr<Player>> players;

    while (true) {
    /*    board.makeMove(player1.getUserInput(),player1.getToken());
        board.checkWin(player1.getToken());
        board.displayBoard();
        player2.readBoard(board.getCopyOfBoard());
        board.makeMove(player2.getUserInput(),player2.getToken());
        board.checkWin(player2.getToken());
        board.displayBoard();
        */
       /*
       for (Player& p : players){
           board.displayBoard();
           p.readBoard(board.getCopyOfBoard());
           board.makeMove(p.getUserInput(),p.getToken());
           board.checkWin(p.getToken());
       }
       */
    }
    return 0;
}
