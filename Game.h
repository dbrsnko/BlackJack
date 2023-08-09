#pragma once
#include "Player.h"
#include "Dealer.h"

enum result {
	PLAYER_WIN,
    PLAYER_LOSE,
    DRAW,
    NONE //in case if game is still goes on
};
inline const char* ToString(result v)
{
	switch (v)
	{
	case PLAYER_WIN:   return "PLAYER WIN";
	case PLAYER_LOSE:   return "PLAYER LOSE";
	case DRAW: return "DRAW";
	case NONE: return "NONE";
	default:      return "[Unknown result]";
	}
}
class Game;
class Game {
private:
    Deck deck;
    Player player;
    Dealer dealer;
    int dealer_turn(); //return score 
    int player_turn(); //return score
    result win_condition(short unsigned int player_score, short unsigned int dealer_score);
public:
    result start();
    
};