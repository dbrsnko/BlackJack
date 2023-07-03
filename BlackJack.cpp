// BlackJack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Deck.h"
#include "Player.h"
#include "Game.h"
#include "Dealer.h"


int main()
{
    Deck test;
    Player player;
    Dealer dealer;
    //test.show_card();
    //test.draw().getpip();
    //std::cout << player.getscore() << "\n";
    for (int i = 0; i < 52; i++) {
      //  player.hit(test.draw());
      // std::cout << player.getscore() << "\n";

        if (dealer.logic())
        {
            dealer.hit(test.draw());
            std::cout << dealer.getscore() << "\n";
        }
    }
    //test.show_card();
    //test.draw().getpip();
  /* for (int i = 0; i<52; i++)
    test.draw();*/
    

   
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
