#pragma once
#include <vector>
#include "Deck.h"

class Player {
private:
	std::vector<Card> hand;
public:
	Player();
	void hit(Card card);
	void stand();
	int getscore();
};