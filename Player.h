#pragma once
#include <vector>
#include "Deck.h"

class Player {
private:
	std::vector<Card> hand;
	bool stand_status = 0;
public:
	Player();
	pips hit(Card card);
	void stand();
	int getscore();
	bool getstand_status();
	void printhand(); //print card pips to console
	void clear(); //clear hand
};