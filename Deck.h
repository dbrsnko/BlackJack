#pragma once
#include "Cards.h"

class Deck {
private:
	std::vector<Card> deck;
public:
	Deck();
	void create();
	void reshuffle();
};