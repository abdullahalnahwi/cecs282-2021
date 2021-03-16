#include <iostream>
//#include <string>
#include "Card.h"

using namespace std;
 
Card::Card()
        {
            rank = 'x';
            suit = 'x';
        } //creates a blank card 
Card::Card(char r, char s)
        {
            rank = r;
            suit = s;
        }
void Card::setCard(char r, char s)
        {

        }
int Card::getValue()
        {
            //return the point value of the card.
            //return value;
        }
void Card::showCard()
        {

        }
