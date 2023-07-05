#pragma once

enum pips {
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
inline const char* ToString(pips v)
{
	switch (v)
	{
	case TWO:   return "TWO";
	case THREE:   return "THREE";
	case FOUR: return "FOUR";
	case FIVE: return "FIVE";
	case SIX: return "SIX";
	case SEVEN: return "SEVEN";
	case EIGHT: return "EIGHT";
	case NINE: return "NINE";
	case TEN: return "TEN";
	case J: return "J";
	case Q: return "Q";
	case K: return "K";
	case A: return "A";
	default:      return "[Unknown pip]";
	}
}
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
	int getvalue();

};

