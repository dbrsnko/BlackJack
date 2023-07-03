#pragma once
#include <vector>
#include "Cards.h"

class Deck {
private:
	std::vector<Card> deck;
public:
	Deck();
	void fill(); //fills deck with cards in order
	void reshuffle(); //changes cards order to random
	Card draw(); //draw a card from a deck (return first card and clear it from deck)
	void show_card(); //show first card 
};

