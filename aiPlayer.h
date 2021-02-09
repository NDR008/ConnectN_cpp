#pragma once

#include "player.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "board.h"

class AiPlayer: public Player{
private:
    int maxWidth;
    void minimax(std::vector<std::vector<char>> board, int depth, int alpha, int beta, char maximizingplayer);
    std::vector<std::vector<char>> boardCopy;

public:
    AiPlayer(char passToken, std::string passName);
    int getUserInput();
    void readBoard(const std::vector<std::vector<char>> &board);
};