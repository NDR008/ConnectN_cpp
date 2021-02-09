#include "board.h"
#include <iostream>

RectBoard::RectBoard(int setHeight, int setWidth){
    width = setWidth;
    height = setHeight;
    initBoard();
    maxMoves = setWidth * setHeight;
    moveCounter = 0;
}

void RectBoard::initBoard(){
    board.resize(height);
    for (unsigned j = 0; j < RectBoard::height; j++){
        board[j].resize(width);
        for (unsigned i = 0; i < RectBoard::width; i++){
            board[j][i] = '.';
        }
    }
}

std::vector<std::vector<char>> RectBoard::getCopyOfBoard(){
    return board;
}

int RectBoard::getWidth(){
    return width;
}

int RectBoard::getHeight(){
    return height;
}

char RectBoard::getTokenAtPos(int row, int col){
    return board[row][col];
}

bool RectBoard::canMove(){
    return (moveCounter < maxMoves);
}

bool RectBoard::makeMove(int col, char token){
    for (int j = 0; j < height; j++){
        if (board[j][col] == '.'){
            board[j][col] = token;
            moveCounter++;
            return true;
        }
    }
    return false;
}

void RectBoard::displayBoard(){
    std::cout << std::endl;
    for (int j = height-1; j >= 0; j--){
        std::cout << "| ";
        for (int i = 0; i < width; i++){
              std::cout << getTokenAtPos(j,i) << " | ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < width; i++){
        std::cout << "----";
    }
    std::cout << "-" << std::endl << "| ";
    for (int i = 0; i < width; i++){
        std::cout << i << " | ";
    }
    std::cout << std::endl;
}

bool RectBoard::checkWin(char token){
    int numberOfMatches = 0;
    for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            if (board[j][i] == token){
                numberOfMatches++;
            } else {
                numberOfMatches = 0;
            }
            if (numberOfMatches >= winValue) {
                return true;
            }
        }
        numberOfMatches = 0;
    }


    numberOfMatches = 0;
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            if (board[j][i] == token) {
                numberOfMatches++;
            } else {
                numberOfMatches = 0;
            }
            if (numberOfMatches >= winValue) {
                return true;
            }
        }
        numberOfMatches = 0;
    }

    int numberOfMatchesDiag1 = 0;
    int numberOfMatchesDiag2 = 0;
    for (int i = -(height - 1); i < width; i++) {
        for (int j = 0; j < height; j++) {
            int x = i + j;
            int y = (height-1)-j;
            if (!(x >= width || x < 0 || y < 0 || y >= height)) {
                if (board[(height-1)-j][i + j] == token) {
                    numberOfMatchesDiag1++;
                } else {
                    numberOfMatchesDiag1 = 0;
                }
                if (numberOfMatchesDiag1 >= winValue) {
                    return true;
                }
            }

            y = j;
            if (!(x >= width || x < 0 || y < 0 || y >= height)) {
                if (board[j][i + j] == token) {
                    numberOfMatchesDiag2++;
                } else {
                    numberOfMatchesDiag2 = 0;
                }
                if (numberOfMatchesDiag2 >= winValue) {
                    return true;
                }
            }
        }

        numberOfMatchesDiag1 = 0;
        numberOfMatchesDiag2 = 0;
    }
    return false;
}
