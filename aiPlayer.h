#pragma once

#include "player.h"
#include <iostream>
#include <ctime>


class AiPlayer: public Player{
private:
    int maxWidth;

public:
    //AiPlayer(char passToken, std::string passName);
    AiPlayer(char passToken, std::string passName);
    int getUserInput();
    void dummyFunctioN(int takesAint);
};