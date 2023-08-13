#pragma once
#include "Cards.h"
#include <vector>


class Player {
private:
	std::vector<Card> hand;
	bool stand_status = 0;
public:
	Pips hit(Card card);
	void stand();
	short unsigned int getscore();
	bool getstand_status();
	void printhand(); //print card pips to console
	void clear(); //clear hand
};