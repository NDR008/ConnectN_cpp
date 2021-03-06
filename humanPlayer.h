#pragma once

#include <iostream>
#include "player.h"

class HumanPlayer: public Player{
public:
    using Player::Player;
    int getUserInput();
    void readBoard(const std::vector<std::vector<char>> &board);
};