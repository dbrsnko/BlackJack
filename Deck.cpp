#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <time.h>
#include "Deck.h"


//objects declaration in order to fit them into deck later
Card two_hearts(TWO, HEARTS);
Card three_hearts(THREE, HEARTS);
Card four_hearts(FOUR, HEARTS);
Card five_hearts(FIVE, HEARTS);
Card six_hearts(SIX, HEARTS);
Card seven_hearts(SEVEN, HEARTS);
Card eight_hearts(EIGHT, HEARTS);
Card nine_hearts(NINE, HEARTS);
Card ten_hearts(TEN, HEARTS);
Card jack_hearts(J, HEARTS);
Card queen_hearts(Q, HEARTS);
Card king_hearts(K, HEARTS);
Card ace_hearts(A, HEARTS);

Card two_diamonds(TWO, DIAMONDS);
Card three_diamonds(THREE, DIAMONDS);
Card four_diamonds(FOUR, DIAMONDS);
Card five_diamonds(FIVE, DIAMONDS);
Card six_diamonds(SIX, DIAMONDS);
Card seven_diamonds(SEVEN, DIAMONDS);
Card eight_diamonds(EIGHT, DIAMONDS);
Card nine_diamonds(NINE, DIAMONDS);
Card ten_diamonds(TEN, DIAMONDS);
Card jack_diamonds(J, DIAMONDS);
Card queen_diamonds(Q, DIAMONDS);
Card king_diamonds(K, DIAMONDS);
Card ace_diamonds(A, DIAMONDS);

Card two_clubs(TWO, CLUBS);
Card three_clubs(THREE, CLUBS);
Card four_clubs(FOUR, CLUBS);
Card five_clubs(FIVE, CLUBS);
Card six_clubs(SIX, CLUBS);
Card seven_clubs(SEVEN, CLUBS);
Card eight_clubs(EIGHT, CLUBS);
Card nine_clubs(NINE, CLUBS);
Card ten_clubs(TEN, CLUBS);
Card jack_clubs(J, CLUBS);
Card queen_clubs(Q, CLUBS);
Card king_clubs(K, CLUBS);
Card ace_clubs(A, CLUBS);

Card two_spades(TWO, SPADES);
Card three_spades(THREE, SPADES);
Card four_spades(FOUR, SPADES);
Card five_spades(FIVE, SPADES);
Card six_spades(SIX, SPADES);
Card seven_spades(SEVEN, SPADES);
Card eight_spades(EIGHT, SPADES);
Card nine_spades(NINE, SPADES);
Card ten_spades(TEN, SPADES);
Card jack_spades(J, SPADES);
Card queen_spades(Q, SPADES);
Card king_spades(K, SPADES);
Card ace_spades(A, SPADES);


Deck::Deck() {
	this->fill();
	this->reshuffle();
}

void Deck::fill() {
	deck.push_back(two_hearts);   //since push_back copies the argument we can use those classes later 
	deck.push_back(three_hearts); //to fill deck again
	deck.push_back(four_hearts);
	deck.push_back(five_hearts);
	deck.push_back(six_hearts);
	deck.push_back(seven_hearts);
	deck.push_back(eight_hearts);
	deck.push_back(nine_hearts);
	deck.push_back(ten_hearts);
	deck.push_back(jack_hearts);
	deck.push_back(queen_hearts);
	deck.push_back(king_hearts);
	deck.push_back(ace_hearts);
	
	deck.push_back(two_diamonds); 
	deck.push_back(three_diamonds);
	deck.push_back(four_diamonds);
	deck.push_back(five_diamonds);
	deck.push_back(six_diamonds);
	deck.push_back(seven_diamonds);
	deck.push_back(eight_diamonds);
	deck.push_back(nine_diamonds);
	deck.push_back(ten_diamonds);
	deck.push_back(jack_diamonds);
	deck.push_back(queen_diamonds);
	deck.push_back(king_diamonds);
	deck.push_back(ace_diamonds);

	deck.push_back(two_clubs); 
	deck.push_back(three_clubs);
	deck.push_back(four_clubs);
	deck.push_back(five_clubs);
	deck.push_back(six_clubs);
	deck.push_back(seven_clubs);
	deck.push_back(eight_clubs);
	deck.push_back(nine_clubs);
	deck.push_back(ten_clubs);
	deck.push_back(jack_clubs);
	deck.push_back(queen_clubs);
	deck.push_back(king_clubs);
	deck.push_back(ace_clubs);

	deck.push_back(two_spades);
	deck.push_back(three_spades);
	deck.push_back(four_spades);
	deck.push_back(five_spades);
	deck.push_back(six_spades);
	deck.push_back(seven_spades);
	deck.push_back(eight_spades);
	deck.push_back(nine_spades);
	deck.push_back(ten_spades);
	deck.push_back(jack_spades);
	deck.push_back(queen_spades);
	deck.push_back(king_spades);
	deck.push_back(ace_spades);
}
void Deck::reshuffle() {
	std::random_device rd;      
	std::mt19937 g(rd());
	std::shuffle(std::begin(deck), std::end(deck), g);
	//might be a better option creating rd outside
	//of function and passing it as a value
}
Card Deck::draw() {
	Card tmp = deck.front();
	deck.erase(deck.begin());
	return tmp;
}

void Deck::show_card() {
	//if (!deck.empty()) {            //disabled for testing purposes
		Card tmp = deck.front();
		std::cout << deck.front().getpip() << "\n";
	//}
}
