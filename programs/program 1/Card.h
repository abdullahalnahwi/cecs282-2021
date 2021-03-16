#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>

using namespace std;

class Card{
    private:
        char rank;
        char suit;
    public:
        Card();
        Card(char , char );
        void setCard(char ,char );
        int getValue();
        void showCard();
};






#endif