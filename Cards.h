#pragma once

enum pips {
	TWO = 2,
	THREE = 3, 
	FOUR = 4,
	FIVE = 5,
	SIX= 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	J = 10,
	Q = 10,
	K = 10,
	A = 11  
};

enum suits {
	HEARTS,
	DIAMONDS,
	CLUBS,
	SPADES
};

class Card;
class Card {
private:
	suits _suit; 
	pips _pip; 
public:
	Card();
	Card(pips pip, suits suit);
	suits getsuit();
	pips getpip();

};

