#include <iostream>
#include <algorithm>
#include "Player.h"
#include "Deck.h"

void Player::hit(Card card) {   //hit a card, return a player`s score
		hand.push_back(card);	//it takes card as a parameter so there is no need to make a pass by reference
		std::sort(hand.begin(), hand.end(), [](Card a, Card b){return a.getpip() < b.getpip();}); //sort from lowest pip (A is considered 11)
	
	
}
void Player::stand() {

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