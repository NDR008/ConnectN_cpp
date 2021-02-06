#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
//#include <stdlib.h>
namespace BoardGames {
    using namespace std;
    class RectBoard {
        private:
            int width;
            int height;
            vector<vector<char>> board;

        public:
            RectBoard(int setWidth, int setHeight);
            void ResetBoard();
    };
}
#endif

/*
board = (char **) malloc(sizeof(char *) * N);
for (unsigned i = 0; i < N; i++) board[i] = (char *) malloc(sizeof(char) * N);
*/