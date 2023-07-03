#include <iostream>
#include "Dealer.h"

Dealer::Dealer() {

}

bool Dealer::logic() {
	if (getscore() < 17)
		return 1;
	else
		return 0;
}