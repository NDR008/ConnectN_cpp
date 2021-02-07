#include "iostream"
#include "board.h"
#include "humanPlayer.h"
#include "aiPlayer.h"

using namespace std;

int main(){
    RectBoard board(4,5);

/*
    // check horizontal
    board.initBoard();
    board.makeMove(1,'B');
    board.makeMove(2,'B');
    board.makeMove(3,'B');
    board.makeMove(4,'B');
    board.checkWin('B');
    board.displayBoard();

    // check vertical
    board.initBoard();
    board.makeMove(2,'B');
    board.makeMove(2,'B');
    board.makeMove(2,'B');
    board.makeMove(2,'B');
    board.checkWin('B');
    board.displayBoard();

    // check diag1
    board.initBoard();
    board.makeMove(0,'J');
    board.makeMove(0,'J');
    board.makeMove(0,'J');
    board.makeMove(0,'B');
    board.makeMove(1,'J');
    board.makeMove(1,'J');
    board.makeMove(1,'B');
    board.makeMove(2,'J');
    board.makeMove(2,'B');
    board.makeMove(3,'B');
    board.checkWin('B');
    board.displayBoard();
    
    // check diag2
    board.initBoard();
    board.makeMove(0,'B');
    board.makeMove(1,'J');
    board.makeMove(1,'B');
    board.makeMove(2,'J');
    board.makeMove(2,'J');
    board.makeMove(2,'B');
    board.makeMove(3,'J');
    board.makeMove(3,'J');
    board.makeMove(3,'J');
    board.makeMove(3,'B');
    board.makeMove(4,'J');
    board.makeMove(4,'J');
    board.makeMove(4,'J');
    board.makeMove(4,'J');
    board.checkWin('B');
    board.displayBoard();
*/
    board.initBoard();

    HumanPlayer player1('A', "Asuka");
    AiPlayer player2('N', "Nadir");
    board.displayBoard();
    while (true) {
        board.makeMove(player1.getUserInput(),player1.getToken());
        board.checkWin(player1.getToken());
        board.displayBoard();
        board.makeMove(player2.getUserInput(),player2.getToken());
        //player2.readBoard(board);
        board.checkWin(player2.getToken());
        board.displayBoard();
    }
    return 0;
}
