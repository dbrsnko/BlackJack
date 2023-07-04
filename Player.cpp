#include <iostream>
#include <algorithm>
#include "Player.h"
#include "Deck.h"

pips Player::hit(Card card) {   //hit a card, return a player`s score
	if (!stand_status) { 
		hand.push_back(card);
		std::sort(hand.begin(), hand.end(), [](Card a, Card b) {return a.getpip() < b.getpip(); }); //sort from lowest pip (A is considered 11)
		return card.getpip();
	}
	
}
void Player::stand() {
	stand_status = 1;
}
Player::Player() {

}
int Player::getscore() {
	int score = 0;
	for (int i = 0; i < hand.size(); i++) {
		if (hand[i].getpip() == A)
			if (score + 11 <= 21)
				score += 11;
			else score += 1;
		else
			score += hand[i].getpip();
		//std::cout << "+"<< hand[i].getpip() <<"\n";
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