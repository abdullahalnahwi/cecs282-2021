#include <iostream>
//#include <string>
#include "upDate.h"

using namespace std;
int upDate::count = 0;

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

upDate::upDate(){				//defualt constructor
			upptr[1] = 11;
			upptr[0] = 5;
			upptr[2] = 1959;
			count++;
		}
upDate::upDate(int M,int D, int Y){		//overloaded constructor
			
			upptr[0]= M;
			upptr[1] = D;
			upptr[2] = Y;
			int jd = Greg2Julian(upptr[2], upptr[0], upptr[1]);
			Julian2Greg(jd, upptr[2], upptr[0], upptr[1]);
			if (upptr[0] == M && upptr[1] == D && upptr[2] ==Y){
					upptr[0] = M;
					upptr[1] = D;
					upptr[2] = Y;
			}
			else{
					upptr[0] = 5;
					upptr[1] = 11;
					upptr[2] = 1959;
			}
			count ++;
		}

upDate::upDate(int jd){							//constructor 
	Julian2Greg(jd, upptr[2], upptr[0], upptr[1]);
	count++;
}

upDate::~upDate(){    //Destructor 
    //cout<<"calling destructor"<<endl;
		count--;
		delete [] upptr;
		   
}
upDate::upDate(const upDate &date){ 	   //Copy Constructor
    upptr[0] = date.upptr[0];
    upptr[1] = date.upptr[1];
    upptr[2] = date.upptr[2];
    count++;
}
void upDate::setDate(int M, int D, int Y){
			upptr[0]= M;
			upptr[1] = D;
			upptr[2] = Y;
			int jd = Greg2Julian(upptr[2], upptr[0], upptr[1]);
			Julian2Greg(jd, upptr[2], upptr[0], upptr[1]);
			if (upptr[0] == M && upptr[1] == D && upptr[2] ==Y){
					upptr[0] = M;
					upptr[1] = D;
					upptr[2] = Y;
			}
			else{
					upptr[0] = 5;
					upptr[1] = 11;
					upptr[2] = 1959;
			}
			count ++;
		}
void upDate::display(){
			string m;
			if (upptr[0] == 1){
				 m = "January";
			}
			else if(upptr[0] == 2){
				m = "February";
			}
			else if(upptr[0] == 3){
				m = "March";
			}
			else if(upptr[0] == 4){
				m = "April";
			}
			else if(upptr[0] == 5){
				m = "May";
			}
			else if(upptr[0] == 6){
				m = "June";
			}
			else if(upptr[0] == 7){
				m = "July";
			}
			else if(upptr[0] == 8){
				m = "August";
			}
			else if(upptr[0] == 9){
				m = "September";
			}
			else if(upptr[0] == 10){
				m = "October";
			}
			else if(upptr[0] == 11){
				m = "November";
			}
			else if(upptr[0] == 12){
				m = "December";
			}
			cout<<m<<" "<<upptr[1]<<", "<<upptr[2];
		}

int upDate:: daysBetween(upDate D){
			int jd = Greg2Julian(upptr[2],upptr[0] , upptr[1]);
			int thisjd = Greg2Julian(D.upptr[2],D.upptr[0] , D.upptr[1]);
			return thisjd-jd;
}
int upDate:: getDay(){
			return upptr[1];
		}
int upDate:: getMonth(){
			return upptr[0];
		}
int upDate:: getYear(){
			return upptr[2];
		}
int upDate:: dayOfYear(){
			int jd1 = Greg2Julian(upptr[2],1, 1);
			int jd2 = Greg2Julian(upptr[2],upptr[0],upptr[1]);
			return jd2-jd1 +1 ; 
		}
string upDate::dayName(){
			int jd = Greg2Julian(upptr[2] , upptr[0] ,upptr[1]);
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

string upDate::getMonthName(){
	string d = to_string(upptr[1]);
	string y = to_string(upptr[2]);
	string m;
			if (upptr[0] == 1){
				 m = "January";
			}
			else if(upptr[0] == 2){
				m = "February";
			}
			else if(upptr[0] == 3){
				m = "March";
			}
			else if(upptr[0] == 4){
				m = "April";
			}
			else if(upptr[0] == 5){
				m = "May";
			}
			else if(upptr[0] == 6){
				m = "June";
			}
			else if(upptr[0] == 7){
				m = "July";
			}
			else if(upptr[0] == 8){
				m = "August";
			}
			else if(upptr[0] == 9){
				m = "September";
			}
			else if(upptr[0] == 10){
				m = "October";
			}
			else if(upptr[0] == 11){
				m = "November";
			}
			else if(upptr[0] == 12){
				m = "December";
			}
			return m;
		}

upDate upDate::operator =(upDate date) {
	upptr =new int [3];	
	upptr[2] = date.upptr[2];
	upptr[0] = date.upptr[0];
	upptr[1] = date.upptr[1];
	return *this;
}
/*
upDate upDate::operator-(const upDate &d){	// not sure if we need this 
	//int jd1 =  Greg2Julian(d.year,d.month,d.day);
	int jd =  Greg2Julian(this->upptr[2],this->upptr[0],this->upptr[1]);
	int jd1 =  Greg2Julian(d.upptr[2],d.upptr[0],d.upptr[1]);
	int sum = (jd1-jd);	
	Julian2Greg(sum, upptr[2], upptr[0], upptr[1]);
	return temp;
}*/
int upDate::operator-(upDate date){
	int jd=Greg2Julian(upptr[2], upptr[0], upptr[1]);
	int jd1= Greg2Julian(date.upptr[2], date.upptr[0], date.upptr[1]);
	int diff = jd - jd1;
	return diff;
}
/*
upDate upDate::operator+(upDate d){	// not sure if we need this 
	//int jd1 =  Greg2Julian(d.year,d.month,d.day);
	upDate temp(*this);
	int jd =  Greg2Julian(temp.upptr[2],temp.upptr[0],temp.upptr[1]);
	int jd1 =  Greg2Julian(d.upptr[2],d.upptr[0],d.upptr[1]);
	int sum = (jd1+jd);
	Julian2Greg(sum, temp.upptr[2], temp.upptr[0], temp.upptr[1]);
	return temp;
}
*/
upDate upDate::operator+(int n){
//cout<<" it called this "<<endl;
upDate temp(*this);
int jd = Greg2Julian(temp.upptr[2], temp.upptr[0],temp.upptr[1]);
//int jd = Greg2Julian(this->upptr[2], this->upptr[0],this->upptr[1]);
jd= jd+n;
Julian2Greg(jd, temp.upptr[2], temp.upptr[0], temp.upptr[1]);
return temp;
//return *this;
}
upDate upDate::operator-(int n ){
//cout <<"does it"<<endl;
upDate temp(*this);
int jd = Greg2Julian(temp.upptr[2], temp.upptr[0],temp.upptr[1]);
jd-=n;
Julian2Greg(jd, temp.upptr[2], temp.upptr[0], temp.upptr[1]);
return temp;
}
upDate upDate::operator +=(int n) {
	upDate temp(*this);
	int jd = Greg2Julian(temp.upptr[2], temp.upptr[0], temp.upptr[1]);
	jd += n;
	Julian2Greg(jd, temp.upptr[2], temp.upptr[0], temp.upptr[1]);
	return temp;
}
upDate upDate::operator -=(int n) {
	upDate temp(*this);
	int jd = Greg2Julian(temp.upptr[2], temp.upptr[0], temp.upptr[1]);
	jd -= n;
	Julian2Greg(jd, temp.upptr[2], temp.upptr[0], temp.upptr[1]);
	return temp;
}
int upDate::GetDateCount() {
	return count;
}
upDate upDate::operator ++() {
	*this =*this+ 1;

	return *this;
}
upDate upDate::operator --() {
	*this =*this- 1;

	return *this;
}
int upDate::julian(){
	int jd = Greg2Julian(upptr[2], upptr[0], upptr[1]);
	return jd;
}
void upDate::gregorian(int jd){
	Julian2Greg(jd, upptr[2], upptr[0], upptr[1]);
}
upDate upDate::operator ++(int n){
	int date = julian();
	date++;
	gregorian(date);
	return *this;
}
upDate upDate::operator --(int n){
	int date = julian();
	date--;
	gregorian(date);
	return *this;
}
bool upDate::operator ==(upDate date) {
	if (this->julian() == date.julian())
		return true;
	return false;
}
bool upDate::operator <(upDate date) {
	if (this->julian() < date.julian())
		return true;
	return false;
}
bool upDate::operator >(upDate date) {
	if (this->julian() > date.julian())
		return true;
	return false;
}
ostream& operator <<(ostream& os, upDate date) {
	os << date.getMonth() << "/" << date.getDay() << "/" << date.getYear();
	return os;
}
upDate operator +(int j, upDate date) {	//checked
	return date + j;
}
upDate operator -(int j, upDate date) { //checked 
	return date - j;
}



