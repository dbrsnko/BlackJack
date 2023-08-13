#include "Player.h"
#include <iostream>
#include <algorithm>

Pips Player::hit(Card card) {   //hit a card, return a player`s score
	if (!stand_status) { 
		hand.push_back(card);
		std::sort(hand.begin(), hand.end(), [](Card a, Card b) {return a.getpip() < b.getpip(); }); //sort from lowest pip (A is considered 11)
		if (getscore() >= 21)
			stand();
		return card.getpip();
	}
	
}
void Player::stand() {
	stand_status = 1;
}

short unsigned int Player::getscore() {
	short unsigned int score = 0;
	for (int i = 0; i < hand.size(); i++) {
		if (hand[i].getpip() == Pips::A)
			if (score + 11 <= 21)
				score += 11;
			else score += 1;
		else
			score += hand[i].getvalue();
		
	}
	return score;
};
void Player::clear() {
	hand.clear();
	stand_status = 0;
}
bool Player::getstand_status() {
	return stand_status;
}
void Player::printhand() {
	bool counter = 0;
	for (int i = 0; i < hand.size(); i++) {
		if (counter > 0)
			std::cout << ", ";
		std::cout << ToString(hand[i].getpip());
		counter++;
	}
	std::cout << "\n";
};