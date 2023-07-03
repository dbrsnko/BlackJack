#pragma once
#include "Player.h"
#include "Deck.h"

class Dealer: public Player {
	public:
		Dealer();
		bool logic(); //return 1 if score is less than 17, return 0 otherwise
};