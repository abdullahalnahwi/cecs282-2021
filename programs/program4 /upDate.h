#ifndef UPDATE_H
#define UPDATE_H
#include <iostream>

using namespace std;
class upDate{
	private:
		//int day;
		//int month;
		//int year;
		int *upptr =new int[3]; 
		static int count; 

	public:
		upDate();
		upDate(int ,int , int );
		upDate(int jd);
		~upDate();
		upDate(const upDate &);
		void setDate(int ,int ,int);
		void display();
		void increaseDate(int );
		void decreaseDate(int );
		int daysBetween(upDate );
		int getDay();
		int getMonth();
		int getYear();
		int dayOfYear();
		string dayName();
		string getMonthName();
		upDate operator =(upDate); //
		//upDate operator -(upDate); 
		int operator -(upDate);
		//upDate operator+(upDate);
		upDate operator+(int);
		upDate operator-(int);
		upDate operator+=(int);
		upDate operator-=(int);
		static int GetDateCount();
		upDate operator++();
		upDate operator--();
		int julian();
		void gregorian(int );
		upDate operator++(int);
		upDate operator--(int);
		bool operator ==(upDate);
		bool operator <(upDate);
		bool operator >(upDate);
		friend ostream& operator<<(ostream&, upDate); 
		friend upDate operator+(int, upDate); 
		friend upDate operator-(int, upDate); 

};

#endif