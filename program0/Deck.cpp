#include <iostream>
#include <string>
#include "Deck.h"
#include "Card.h"
using namespace std;

Deck :: Deck()
        {
						// you can use an incrementer 
						int i = 0;
            char suit[4]={'S','H','D','C'};
            char rank[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
            // do a for a loop inside a for loop 
						for(int row=0;row<4;row++)
						{
							for(int col=0;col<13;col++)
							{
								Card card(rank[col],suit[row]);
								thedeck[i]= card;
								i++;
								//int index = col+(13*row); // formula for calculating index in thedeck. 
								//thedeck[index]=card;
								// how to create the cards ? 
							}
						}  
        }

void Deck::shuffle()
        {// something going around here - fixed 
					srand(time(NULL));
					for(int i = 0;i< 1000;i++)
					{
						int x = rand() % 52;
						int y = rand() % 52;

						Card temp =thedeck[x];
						thedeck[x] = thedeck[y];
						thedeck[y] = temp;
					}
        }
void Deck::refreshDeck()
        {
						int i = 0;
            char suit[4]={'S','H','D','C'};
            char rank[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
						for(int row=0;row<4;row++)
						{
							for(int col=0;col<13;col++)
							{
								Card card(rank[col],suit[row]);
								thedeck[i]= card;
								i++;
							}
						}
        }
Card Deck::deal()
        {
					return thedeck[topCard++];
        }
int Deck :: cardsLeft()
        {
            //return number of cards left from the deck 
						int cleft = 0;
						cleft = 52-topCard;
						return cleft;
        }
void Deck::showDeck()
        {
					int times = 0;
					for (int i=0;i<4;i++)
					{
						for (int n=0;n<13;n++)
						{
							thedeck[times].showCard();
							times++;
							cout<<" ";
						}
						cout<<"\n";
					}
        }