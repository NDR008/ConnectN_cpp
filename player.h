#pragma once

#include <string>

class Player {
        private:
        char token;
        std::string name;
        int winCounter=0;

        public:
            Player(char passToken, std::string passName);
            int getUserInput();
            char getToken();
            std::string getName();
            void incWins();
            int getWins();
};