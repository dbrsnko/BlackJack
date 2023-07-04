#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Dealer.h"

result Game::begin() {

    deck.fill();
    deck.reshuffle();
    player.clear();
    dealer.clear();
    char input;
    player.hit(deck.draw());
    for (int i = 0; i < deck.getsize(); i++) {
        if (dealer.logic()){
             dealer.hit(deck.draw());
             std::cout <<"Dealer's score is: " << dealer.getscore() << "\n";
        }
        else dealer.stand();
        std::cout << "Player's score is: " << player.getscore() << "\n";
        if (!player.getstand_status()) {
            std::cout << "Make a hit? 1-Yes, 2-No " << "\n";
            std::cin >> input;
            switch (input) {
            case '1':
                player.hit(deck.draw());
                break;
            case '2':
                player.stand();
                break;
            default:
                std::cout << "Wrong input " << "\n";
            }
        }
        
        
    }
	return DRAW;
}

result Game::win_condition(int player_score, int dealer_score) {
    return DRAW;
}