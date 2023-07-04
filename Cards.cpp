#include "Cards.h"
#include <iostream>

Card::Card(pips pip, suits suit) {
	_pip = pip;
	_suit = suit;
};
Card::Card() {
	_pip = A;
	_suit = SPADES;
};

pips Card::getpip() {
	return _pip;
}
suits Card::getsuit() {
	return _suit;
}


