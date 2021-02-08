#include <iostream>
#include <vector>
#include <memory>
#include "board.h"
#include "player.h"
#include "humanPlayer.h"
#include "aiPlayer.h"

using namespace std;

int main(){
    RectBoard board(3,3);
    board.initBoard();
    //vector<Player*> players2;  // this nearly worked but...
    
    //std::unique_ptr<Player> simplerPointer = std::make_unique<HumanPlayer>('S', "Sickle");
    //obj p1* = &HumanPlayer('A', "Asuka");
    //HumanPlayer p1 = HumanPlayer('S', "Sickle");
    //AiPlayer p2 = AiPlayer('P', "Pixel");
    //players2[0] = &p1;  // with unique_ptry, I do not know how to associate
    //players2[1] = p2;
    //players2[0] = std::make_unique<p1>;
    std::vector<std::unique_ptr<Player>> players2;
    players2.resize(2);

    players2[0]  = std::make_unique<AiPlayer>('S', "Sickle");
    players2[1]  = std::make_unique<AiPlayer>('P', "Pixel");

    int nextPlayer = 0;
    board.displayBoard();
        while (true) {
        players2[nextPlayer]->readBoard(board.getCopyOfBoard());  
        board.makeMove(players2[nextPlayer]->getUserInput(),players2[nextPlayer]->getToken());  
        if(board.checkWin(players2[nextPlayer]->getToken())) { break; }
        if(!board.canMove()) {break;}
        cout << endl;
        board.displayBoard();
        nextPlayer++;
        if (nextPlayer > 1) { nextPlayer = 0; }
    }
    return 0;
}
