#include "aiPlayer.h"

AiPlayer::AiPlayer(char passToken, std::string passName):Player(passToken, passName){
    srand(time(nullptr));
}

int AiPlayer::getUserInput(){
    int temp =  (rand());
    //cout << "Choose your move " << getName() << ": ";
    std::cout << "Choose your move " << name << ": ";
    std::cin >> temp;
    return temp;
}

 void AiPlayer::dummyFunctioN(int takesAint){}