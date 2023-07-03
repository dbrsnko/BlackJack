#include "Cards.h"
#include <iostream>

Card::Card(int pip, int suit) {
	_suit = suit;
	_pip = pip;
};
Card::Card() {
	_suit = 0;
	_pip = 0;
};

int Card::getpip() {
	return _pip;
}
int Card::getsuit() {
	return _suit;
}


