#pragma once
#include "Player.h"
#include "Dealer.h"

enum result {
	PLAYER_WIN,
    DEALER_WIN,
    DRAW
};

class Game {
private:
    Deck deck;
    Player player;
    Dealer dealer;
public:
    result begin();
    result win_condition(int player_score, int dealer_score);
};