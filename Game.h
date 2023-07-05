#pragma once
#include "Player.h"
#include "Dealer.h"

enum result {
	PLAYER_WIN,
    PLAYER_LOSE,
    DRAW,
    NONE //in case if game is still goes on
};
class Game;
class Game {
private:
    Deck deck;
    Player player;
    Dealer dealer;
    int dealer_turn(); //return score 
    int player_turn(); //return score
    result win_condition(int player_score, int dealer_score, bool player_stand, bool dealer_stand);
public:
    result begin();
    
};