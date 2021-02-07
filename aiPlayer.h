#pragma once

#include <iostream>
#include <ctime>
#include "player.h"

class AiPlayer: public Player{
private:
    int maxWidth;

public:
    AiPlayer(char passToken, std::string passName);
    int getUserInput();
    void readBoard(std::vector<std::vector<char>> board);
};