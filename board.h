#ifndef BOARD_H
#define BOARD_H

#include <vector>

class RectBoard {
        private:
            int width;
            int height;
            std::vector<std::vector<char>> board;

        public:
            RectBoard(int setWidth, int setHeight);
            void ResetBoard();
            int getWidth();
            int getHeight();
};
#endif

/*
board = (char **) malloc(sizeof(char *) * N);
for (unsigned i = 0; i < N; i++) board[i] = (char *) malloc(sizeof(char) * N);
*/