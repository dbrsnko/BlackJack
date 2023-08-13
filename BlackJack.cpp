#include "Game.h"

int main()
{
    Deck test;
    Player player;
    Dealer dealer;
    Game game;
    
    bool play=1;
    while (play) {
        game.start();
        std::cout << "Do you wish to play again?\n1-Yes, 2-No\n";
        char input = '0';
        while (1) {
            std::cin >> input;
            switch (input) {
            case '1':
                play=1;
                break;
            case '2':
                play=0;
                break;
            default:
                std::cout << "Wrong input\n";
            }
            if (input == '1' || input == '2')
                break;
        }

    }
    return 0;
    

   
    
}

