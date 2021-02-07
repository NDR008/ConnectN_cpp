#include "humanPlayer.h"

using namespace std;

int HumanPlayer::getUserInput(){
    int temp;
    cout << "Choose your move " << ": ";
    cin >> temp;
    return temp;
}