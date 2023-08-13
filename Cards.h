#pragma once
#include <string>

enum class Pips {
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	J,
	Q,
	K,
	A 
};
std::string ToString(Pips v);
enum class Suits {
	HEARTS,
	DIAMONDS,
	CLUBS,
	SPADES
};

class Card;
class Card {
private:
	Suits _suit;
	Pips _pip;
	//in case if graphics would be added:
	//place a func here somewhere that assigns card's skin
	//based on a _suit and _pip
	//also call it from constructor
public:
	Card();
	Card(Pips pip, Suits suit);
	Suits getsuit();
	Pips getpip();
	unsigned short int getvalue();

};

