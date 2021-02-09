#include "humanPlayer.h"

using namespace std;

int HumanPlayer::getUserInput(){
    int temp;
    cout << "Choose your move " << name << ": ";
    cin >> temp;
    cout << std::endl;
    return temp;
}

void HumanPlayer::readBoard(const std::vector<std::vector<char>> &board){}