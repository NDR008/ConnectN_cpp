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

            virtual void readBoard(const std::vector<std::vector<char>> &board)=0;
            virtual int getUserInput()=0;
            // if in doubt why virtual... https://godbolt.org/z/6TrTcs

            char getToken();
            std::string getName();
            void incWins();
            int getWins();
};