#include <iostream>
//#include <string>
#include "myDate.h"

using namespace std;

int Greg2Julian(int YEAR , int MONTH, int DAY)
{
	int I = YEAR; 
  int J = MONTH;
	int K = DAY;

  int JD = K-32075 + 1461 * (I + 4800 + (J-14) / 12)/4 + 367 * (J-2-(J-14)/12*12)/12-3*((I+4900+(J-14)/12)/100)/4;

  return JD;
}

void Julian2Greg(int JD, int &YEAR, int &MONTH, int &DAY)
{
	int I, J ,K;
	
	int L = JD + 68569;
	int N = 4*L/146097; //fixed
	L = L-(146097*N+3)/4;
	I = 4000*(L+1)/1461001;
	L = L-1461 * I/4+31;
	J = 80*L/2447;
	K = L-2447*J/80;
	L = J/11;
	J = J+2 -12*L;
	I = 100*(N-49)+I+L;

	YEAR = I;
	MONTH = J;
	DAY = K;
}

myDate::myDate(){
			day = 11;
			month = 5;
			year = 1959;
		}
myDate::myDate(int M,int D, int Y){
			month= M;
			day = D;
			year = Y;
			int jd = Greg2Julian(year, month, day);
			Julian2Greg(jd, year, month, day);
			if (month == M && day == D && year ==Y){
					month = M;
					day = D;
					year = Y;
			}
			else{
					month = 5;
					day = 11;
					year = 1959;
			}
			
		}
void myDate::display(){
			string m;
			if (month == 1){
				 m = "January";
			}
			else if(month == 2){
				m = "February";
			}
			else if(month == 3){
				m = "March";
			}
			else if(month == 4){
				m = "April";
			}
			else if(month == 5){
				m = "May";
			}
			else if(month == 6){
				m = "June";
			}
			else if(month == 7){
				m = "July";
			}
			else if(month == 8){
				m = "August";
			}
			else if(month == 9){
				m = "September";
			}
			else if(month == 10){
				m = "October";
			}
			else if(month == 11){
				m = "November";
			}
			else if(month == 12){
				m = "December";
			}
			cout<<m<<" "<<day<<", "<<year;
		}
void myDate::increaseDate(int N){
			int jd = Greg2Julian(year, month, day);
			jd += N;
    	Julian2Greg(jd, year, month, day);
			
		}	
void myDate::decreaseDate(int N){
			int jd = Greg2Julian(year, month, day);
			jd -= N;
    	Julian2Greg(jd, year, month, day);
		}
int myDate:: daysBetween(myDate D){
			int jd = Greg2Julian(year,month , day);
			int thisjd = Greg2Julian(D.year,D.month , D.day);
			return thisjd-jd;
}
int myDate:: getDay(){
			return day;
		}
int myDate:: getMonth(){
			return month;
		}
int myDate:: getYear(){
			return year;
		}
int myDate:: dayOfYear(){
			int jd1 = Greg2Julian(year,1, 1);
			int jd2 = Greg2Julian(year,month,day);
			return jd2-jd1 +1 ; 
		}
string myDate:: dayName(){
			int jd = Greg2Julian(year , month ,day);
			string dayname; 
			if ( (jd % 7) == 0){
				dayname = "Monday";
			}
			else if ((jd % 7) == 1){
				dayname = "Tuesday";
			}
			else if ((jd % 7) == 2){
				dayname = "Wednesday";
			}
			else if ((jd % 7) == 3){
				dayname = "Thursday";
			}
			else if((jd % 7) == 4){
				dayname = "Friday";
			}
			else if ((jd % 7) == 5){
				dayname = "Saturday";
			}
			else if ((jd % 7) ==6){
				dayname  = "Sunday";
			}
			return dayname;
		}
