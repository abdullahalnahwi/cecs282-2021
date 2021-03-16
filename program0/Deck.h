#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

class Deck {
    private:
        Card thedeck[52];
				int topCard = 0;
				int cleft = 0;
    public:
        Deck();
        void refreshDeck();
        Card deal();
        void shuffle();
        int cardsLeft();
        void showDeck();
        
};

#endif