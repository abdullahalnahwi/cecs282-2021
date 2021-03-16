// Name : Abdullah Alnahwi
//Class (CECS 282-01)
//Project Name (Prog 1 – Solitaire Prime)
// Due Date (02/08/2021)
// //I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program
#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

bool isPrime(int number);
void solitare(Deck thedeck);

int main()
{
    int choice;
		Deck d;
		
   	do
    {   
        cout<<" \n";
        cout << " Welcome to Solitaire Prime! \n ";
        cout << "1)New Deck \n 2)Display Deck \n 3)Shuffle Deck \n 4)Play Solitaire Prime \n 5)Exit \n";
				
        choice = 0;
        cin >> choice;
        switch (choice)
        {
            case 1:
						{
							//new deck
								d = Deck();
                break;
						}
            case 2:
						{
								//Display deck
								d.showDeck();
                break;
						}  
            case 3:
						{
								//Shuffle Deck
								d.shuffle();
                break;
						} 
            case 4:
						{
							  // Play Solitaire
								solitare(d);					
                break;
						}   
            case 5:
						{
								cout<<"// Exit ";
                break;
						}     
        default:
            cout<<" please choose from 1 - 5 ";
            break;
        }
    } while (choice != 5);
        return choice; 
return 0;

}

void solitare(Deck thedeck)
{
	//here is the problem 
	int sum = 0 ;
	Card card;
	int count = 0;
	while (thedeck.cardsLeft()!=0)
	{
			
			Card card(thedeck.deal());
			card.showCard();
			sum = sum+card.getValue();
			
			if (isPrime(sum))
			{
				cout<<" -- Prime : "<<sum<<endl;
				sum = 0;
				count++;
			}
			
			else 
			{
				cout<<",";
			}
			if (thedeck.cardsLeft()==0)
			{
				if (isPrime(sum))
				{
					//cout<<" Prime :"<<sum<<" you win!"<<endl;
					cout<<"You won in "<<count<<" piles !!"<<endl;
					

				}
				else{
					//cout<<" not Prime :"<<sum<<" you lost:("<<endl;
					count++;
					cout<<" not prime "<<sum<<" You lost in "<<count<<" piles :("<<endl;
				}
			}
			
		}
	}
	

bool isPrime(int number)
{
	if (number == 1)
	{
		return false;
	}
	for(int k = 2; k<number; k++)
	{
		if (number % k == 0)
		{
			return false; // number is not prime
		}
	}
	return true; //number is prime
}