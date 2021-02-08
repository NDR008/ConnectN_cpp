#pragma once

#include <string>
#include <vector>

class Player {
        protected:
            char token;
            std::string name;
            int winCounter=0;

        public:
            Player()=default;
            Player(char passToken, std::string passName);
            // if these are non-virtual.... then they would be called instead
            virtual int getUserInput()=0;
            virtual void readBoard(std::vector<std::vector<char>> board)=0;

            //int getUserInput();
            //void readBoard(std::vector<std::vector<char>> board);

            char getToken();
            std::string getName();
            void incWins();
            int getWins();
};