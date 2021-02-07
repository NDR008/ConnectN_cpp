#pragma once

#include <string>
#include <vector>

class Player {
        protected:
            char token;
            std::string name;
            int winCounter=0;

        public:
            Player(char passToken, std::string passName);
            virtual int getUserInput()=0;
            virtual void readBoard(std::vector<std::vector<char>> board)=0;
            char getToken();
            std::string getName();
            void incWins();
            int getWins();
};