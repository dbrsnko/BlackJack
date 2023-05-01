#pragma once
#include "Cards.h"

class Deck {
private:
	std::vector<Card> deck;
public:
	Deck();
	void fill(); //fills deck with cards in order
	void reshuffle(); //changes cards order to random
	void draw(); //draw a card from a deck
};