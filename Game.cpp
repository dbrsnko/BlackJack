#include "Game.h"
#include <unordered_map>

std::string ToString(Result v)
{
    std::unordered_map<Result, std::string> u = {
        {Result::PLAYER_WIN, "PLAYER WIN"},
        {Result::PLAYER_LOSE, "PLAYER LOSE"},
        {Result::DRAW, "DRAW"},
        {Result::NONE, "NONE"}
    };
    return u[v];
    
}

Result Game::start() {

    deck.fill();
    deck.reshuffle();
    player.clear();
    dealer.clear();
    Result result=Result::NONE;
    player.hit(deck.draw());
    for (int i = 0; i < deck.getsize(); i++) {
        if (result == Result::NONE) {
            system("cls");
            dealer_turn();
            player_turn();
            if ((dealer.getstand_status() && player.getstand_status())||dealer.getscore()>21||player.getscore()>21)
                result = win_condition(player.getscore(), dealer.getscore());
            if (result != Result::NONE)
                break;
        }
    }
    system("cls");
    std::cout << ToString(result)<<"!\n";
    std::cout << "Dealer's score is: " << dealer.getscore() << "\n";
    dealer.printhand();
    std::cout << "Player's score is: " << player.getscore() << "\n";
    player.printhand();
	return result;
}

Result Game::win_condition(short unsigned int player_score, short unsigned int dealer_score) {
 
    if (player_score > 21)
        return Result::PLAYER_LOSE;
    if (dealer_score > 21) //no need to check player score since it was done already
        return Result::PLAYER_WIN;
    if (player_score == dealer_score)   
        return Result::DRAW;
    if (21 - player_score < 21 - dealer_score)
        return Result::PLAYER_WIN;
    if (21 - player_score > 21 - dealer_score)
        return Result::PLAYER_LOSE;
     

       
    return Result::NONE;
    
}

short unsigned int Game::dealer_turn() {
    if (!dealer.getstand_status()) {
        if (dealer.logic())
            dealer.hit(deck.draw());
        else dealer.stand();
    }
    std::cout << "Dealer's score is: " << dealer.getscore() << "\n";
    dealer.printhand();
    return dealer.getscore();
}
short unsigned int Game::player_turn() {
    std::cout << "Player's score is: " << player.getscore() << "\n";
    player.printhand();
    if (!player.getstand_status()) {
        std::cout << "Make a hit? 1-Yes, 2-No " << "\n";
        char input='0';
        while (1) {
            std::cin >> input;
            switch (input) {
            case '1':
                player.hit(deck.draw());
                break;
            case '2':
                player.stand();
                break;
            default:
                std::cout << "Wrong input " << "\n";
            }
            if (input == '1' || input == '2')
                break;
        }
    }
    return player.getscore();
}