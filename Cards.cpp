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
int Card::getvalue() {
	switch (_pip)
	{
	case TWO:   return 2;
	case THREE:   return 3;
	case FOUR: return 4;
	case FIVE: return 5;
	case SIX: return 6;
	case SEVEN: return 7;
	case EIGHT: return 8;
	case NINE: return 9;
	case TEN: return 10;
	case J: return 10;
	case Q: return 10;
	case K: return 10;
	case A: return 11;
	default:      return 0;
	}
}

