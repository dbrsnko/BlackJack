#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Dealer.h"

result Game::begin() {

    deck.fill();
    deck.reshuffle();
    player.clear();
    dealer.clear();
    result result=NONE;
    player.hit(deck.draw());
    for (int i = 0; i < deck.getsize(); i++) {
      //  if (result == NONE)
            system("cls");
            dealer_turn();
            player_turn();
            result=win_condition(player.getscore(), dealer.getscore(), player.getstand_status(), dealer.getstand_status());
            
      //  else
           // return result;
    }
	return NONE;
}

result Game::win_condition( int player_score, int dealer_score, bool player_stand, bool dealer_stand) {

    if (player_score > 21)
        return PLAYER_LOSE;
    if (player_score == 21 && dealer_score == 21)
        return DRAW;
       
    
}

int Game::dealer_turn() {

    if (dealer.logic()) 
        dealer.hit(deck.draw());
    else dealer.stand();
    std::cout << "Dealer's score is: " << dealer.getscore() << "\n";
    dealer.printhand();
    return dealer.getscore();
}
int Game::player_turn() {
    std::cout << "Player's score is: " << player.getscore() << "\n";
    player.printhand();
    if (player.getscore() >= 21)
        player.stand();
    if (!player.getstand_status()) {
        std::cout << "Make a hit? 1-Yes, 2-No " << "\n";
        char input='0';
        while (1) {
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
            if (input == '1' || input == '2')
                break;
        }
    }
    return player.getscore();
}