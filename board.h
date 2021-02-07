#pragma once

#include <vector>

class RectBoard {
        private:
            int width;
            int height;
            std::vector<std::vector<char>> board;
            int maxMoves;
            int moveCounter;
            const int winValue = 4;

        public:
            RectBoard(int setWidth, int setHeight);
            void initBoard();
            int getWidth();
            int getHeight();
            char getTokenAtPos(int row, int col);
            bool canMove();
            bool makeMove(int col, char token);
            bool checkWin(char token);
            void displayBoard();
            std::vector<std::vector<char>> getCopyOfBoard();
};
/*
board = (char **) malloc(sizeof(char *) * N);
for (unsigned i = 0; i < N; i++) board[i] = (char *) malloc(sizeof(char) * N);
*/