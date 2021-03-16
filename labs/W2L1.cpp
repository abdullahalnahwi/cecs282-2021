// Abdullah Alnahwi, Luke Reissmueller, Tony Tran, Linh Nguyen
///Demo time 6:33
// CECS 282-01
// Prog 1 – Happy Birthday Expanded
// 1/25/2021 

#include <iostream>
#include <string>
using namespace std;

string getName(){
  string name;
  cout << "What is your name? "<<endl;
  cin >> name;
  return name;
}

int getDay(){
	int day;
	cout<< " enter the day you were born in "<<endl;
	cin >> day;
	string x = "g";
	while (x!= "f"){
		if (day > 32 || day < 1 ){
			cout << " please enter a valid day from 1-31 "<<endl;
			cin >> day;
		}
		else {
			x = "f";
		}
	}
	return day; 
}

int getMonth(){
  string month;
  
  cout<< "Enter the month you were born in: \n";
  cin >> month;
  if (month.compare("January") == 0||month.compare("january") == 0){
    return 1;
  }
  else if(month.compare("February") == 0||month.compare("february") == 0){
    return 2;
  }
  else if(month.compare("March") == 0 || month.compare("march") == 0 ){
    return 3;
  }
  else if (month.compare("April") == 0||month.compare("april") == 0){
    return 4;
  }
  else if(month.compare("May") == 0 || month.compare("may") == 0 ){
    return 5;
  }
  else if (month.compare("June") == 0||month.compare("june") == 0){
    return 6;
  }
  else if(month.compare("July") == 0 || month.compare("july") == 0 ){
    return 7;
  }
  else if (month.compare("August") == 0||month.compare("august") == 0){
    return 8;
  }
  else if(month.compare("September") == 0 || month.compare("september") == 0 ){
    return 9;
  }
  else if (month.compare("October") == 0||month.compare("october") == 0){
    return 10;
  }
  else if (month.compare("November") == 0||month.compare("november") == 0){
    return 11;
  }
  else if (month.compare("December") == 0||month.compare("december") == 0){
    return 12;
  }
  else{
    cout << "Not a valid month! Try again.";
    return 0;
  }
}

int getYear(){
  int year;
  cout <<"Enter the year of birth: "<<endl;
  cin >> year;
  return year;
}


int main()
{
  int day;
	int year;
	int month;
  int age;
	int currentYear;
  char thisYear;
  
 	string name;  
	name = getName();
	day = getDay();
  month = getMonth();
  while (month == 0){
    month = getMonth();
  }
	year = getYear();
  currentYear = 2021;

	cout << name << ", have you had your birthday yet this year?? (y/n)";
	cin >> thisYear;

	if (thisYear == 'y' || thisYear == 'Y')
		age = currentYear - year;
	else
		age = currentYear - year - 1;
    
  
  //Hi name. You are --- years old. You were born on month/day/year
  cout << " Hi "<< name <<". You are " << age << " years old. " << "You were born on " << month <<"/"<<day<<"/"<<year;
  //Your next birthday will be in ~ 11 months & 1 week (344 days) 
	cout << " your next birthday will be in "<< 30*(month-1) + day - 25 << "days";

	return 0;
}
