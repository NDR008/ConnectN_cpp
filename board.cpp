#include "board.h"
#include <iostream>

RectBoard::RectBoard(int setWidth, int setHeight){
    RectBoard::width = setWidth;
    RectBoard::height = setHeight;
    void ResetBoard();
}

void RectBoard::ResetBoard(){
    for (unsigned i = 0; i < RectBoard::width; i++){
        for (unsigned j = 0; j < RectBoard::height; j++){
                std::cout << "Test";
            board[i][j] = '_';
        }
    }
}

int RectBoard::getWidth(){
    return width;
}

int RectBoard::getHeight(){
    return height;
}


/*class MyBoard {
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
*/