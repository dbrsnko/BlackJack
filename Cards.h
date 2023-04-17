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
	int _suit; 
	int _pip; 
	int _value; //jack, queen, king are 10 points, ace is 1 or 11
				//if (_value == A && _total_value + A > 21)
				// _value = 1;
public:
	Card();
	Card(int pip, int suit);

};

