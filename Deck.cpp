#include <vector>
#include <algorithm>
#include <random>
#include <time.h>
#include "Deck.h"

Deck::Deck() {
	fill();
	reshuffle();
}

void Deck::fill() {
std::vector<Pips> p{ //vectors are used to iterate through enum class
	Pips::TWO,
	Pips::THREE,
	Pips::FOUR,
	Pips::FIVE,
	Pips::SIX,
	Pips::SEVEN,
	Pips::EIGHT,
	Pips::NINE,
	Pips::TEN,
	Pips::J,
	Pips::Q,
	Pips::K,
	Pips::A
};
std::vector<Suits> s{
	Suits::HEARTS,
	Suits::DIAMONDS,
	Suits::CLUBS,
	Suits::SPADES
};
	for (Suits suit : s) 
		for (Pips pip : p) {
			Card tmp(pip, suit);
			deck.push_back(tmp);
		}

}
void Deck::reshuffle() {
	std::random_device rd;      
	std::mt19937 g(rd());
	std::shuffle(std::begin(deck), std::end(deck), g);
}
Card Deck::draw() { // DO NOT MAKE A DRAW IF CARD IS NOT SUPPOSED TO BE REMOVED FROM A DECK 
	if (!deck.empty()) {
		Card tmp = deck.back();
		deck.erase(deck.end() - 1); //end() returns iterator to the element following the last element of the vector, so -1
		return tmp;
	}
}

Card Deck::show_card() {
	if (!deck.empty()) {
		Card tmp = deck.back();
		return tmp;
	}
	
}
int Deck::getsize() {
	return deck.size();
}
