//Abdullah Alnahwi, Michael Ching, Carson Faatz
//Week 3 - Lab 2 - Object and Class
//02/03/2021
// demo time : 5:48

#include <iostream>
using namespace std;


class Account
{
	private: 
		double balance;

	public:
    Account(double bal){
      balance = bal;
    }
    double get_balance() const{
      return balance;
    }
		void deposit(double amount)
		{
      balance += amount;
		}
    
		void withdraw(double amount)
		{
      
      if(balance < amount)
      {

        balance -= 20;
                
      }

      else 
      {
        balance -= amount;
      }

		}
};
int main() {
  
   Account my_account(100);     // Set up my account with $100
   my_account.deposit(50);
   my_account.withdraw(175);   // Penalty of $20 will apply
   my_account.withdraw(25);

   cout << "Account balance: " << my_account.get_balance() << "\n";
  
   my_account.withdraw(my_account.get_balance());  // withdraw all
   cout << "Account balance: " << my_account.get_balance() << "\n";
 
   return 0;  
  
 
}

