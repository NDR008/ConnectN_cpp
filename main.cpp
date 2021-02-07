#include "board.h"
#include "iostream"

using namespace std;

int main(){
    RectBoard board(4,5);

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

    return 0;
}
