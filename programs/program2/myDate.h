#ifndef MYDATE_H
#define MYDATE_H
#include <iostream>

using namespace std;
class myDate{
	private:
		int day;
		int month;
		int year;

	public:
		myDate();
		myDate(int ,int , int );
		void display();
		void increaseDate(int );
		void decreaseDate(int );
		int daysBetween(myDate );
		int getDay();
		int getMonth();
		int getYear();
		int dayOfYear();
		string dayName();
};

#endif