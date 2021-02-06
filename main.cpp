#include "board.h"
#include "iostream"

using namespace std;

int main(){
    RectBoard board(5,5);
    board.ResetBoard();
    cout << board.getWidth() << board.getHeight();
    return 0;
}