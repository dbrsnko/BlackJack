#pragma once
#include "Player.h"


class Dealer: public Player {
	public:
		bool logic(); //return 1 if score is less than 17, return 0 otherwise
};