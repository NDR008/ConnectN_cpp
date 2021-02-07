#include "humanPlayer.h"

using namespace std;

int HumanPlayer::getUserInput(){
    int temp;
    cout << "Choose your move " << name << ": ";
    cin >> temp;
    return temp;
}

void HumanPlayer::readBoard(std::vector<std::vector<char>> board){}