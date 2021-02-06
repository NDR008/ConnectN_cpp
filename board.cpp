#include <iostream>
#include <vector>
//#include <stdlib.h>

class MyBoard {
    private:
        int width;
        int height;
        //char ** board;
        std::vector<std::vector<char>> board;

    public:
        MyBoard(int setWidth, int setHeight){
            MyBoard::width = setWidth;
            MyBoard::height = setHeight;
            ResetBoard();

        };
        void ResetBoard(){
            for (unsigned i = 0; i < MyBoard::width; i++){
                for (unsigned j = 0; j < MyBoard::height; j++){
                    board[i][j] = '_';
                }
            }
        };

};


/*
board = (char **) malloc(sizeof(char *) * N);
for (unsigned i = 0; i < N; i++) board[i] = (char *) malloc(sizeof(char) * N);
*/