#include "Cards.h"
#include <unordered_map>

Card::Card(Pips pip, Suits suit) {
	_pip = pip;
	_suit = suit;
};
Card::Card() {
	_pip = Pips::A;
	_suit = Suits::SPADES;
};

Pips Card::getpip() {
	return _pip;
}
Suits Card::getsuit() {
	return _suit;
}
unsigned short int Card::getvalue() {
	std::unordered_map<Pips, unsigned short int> u = {
	    {Pips::TWO, 2},
	    {Pips::THREE, 3},
	    {Pips::FOUR, 4},
		{Pips::FIVE, 5},
		{Pips::SIX, 6},
		{Pips::SEVEN, 7},
		{Pips::EIGHT, 8},
		{Pips::NINE, 9},
		{Pips::TEN, 10},
		{Pips::J, 10},
		{Pips::Q, 10},
		{Pips::K, 10},
		{Pips::A, 11}
	};
	return u[_pip];
}
std::string ToString(Pips v)
{
	std::unordered_map<Pips, std::string> u = {
		{Pips::TWO, "TWO"},
		{Pips::THREE, "THREE"},
		{Pips::FOUR, "FOUR"},
		{Pips::FIVE, "FIVE"},
		{Pips::SIX, "SIX"},
		{Pips::SEVEN, "SEVEN"},
		{Pips::EIGHT, "EIGHT"},
		{Pips::NINE, "NINE"},
		{Pips::TEN, "TEN"},
		{Pips::J, "J"},
		{Pips::Q, "Q"},
		{Pips::K, "K"},
		{Pips::A, "A"}
	};
	return u[v];
	
}

