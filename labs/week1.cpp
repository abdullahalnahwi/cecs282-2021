// Abdullah Alnahwi, Carson Faatz, 
// Benjamin Nguyen, Jake Horne
// CECS 282-01
// Prog 0 – Happy Birthday
// 1/20/2021 (Enter the due date)

#include <iostream>
#include <string>
using namespace std;
int main()
{
  string name;
  int age;
  int birthYear;
  char thisYear;
  cout << "What is your name? ";
  cin >> name;
  cout << "How old are you "<<name<<"? ";
  cin >> age;
  cout << name << ", have you had your birthday yet this year?? (y/n) ";
  cin >> thisYear;

  if (thisYear == 'y' || thisYear == 'Y')
    birthYear = 2021 - age;
  else
    birthYear = 2021 - age - 1;
  cout << endl;
  cout << "Hi " << name << "!!!\n\n I guess that you were born in " << birthYear << endl;
  cout << "\n\nPress 'Enter' to continue:";
  
  getchar(); // this line will clear out the input buffer - there is a leftover carriage return
  getchar(); // this line will cause the program to pause until you press the Enter key
  
  return 0;
}
