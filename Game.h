#pragma once
#include <iostream>
#include "Deck.h"
#include "Dealer.h"

enum class Result {
	PLAYER_WIN,
    PLAYER_LOSE,
    DRAW,
    NONE //in case if game is still goes on
};
std::string ToString(Result v);

class Game {
private:
    Deck deck;
    Player player;
    Dealer dealer;
    short unsigned int dealer_turn(); //return score 
    short unsigned int player_turn(); //return score
    Result win_condition(short unsigned int player_score, short unsigned int dealer_score);
public:
    Result start();
    
};