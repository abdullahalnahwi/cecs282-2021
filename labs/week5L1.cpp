//Abdullah Alnahwi, Quoc Ngo , Yuvika Nibber, Michael Ching 
//CECS 282 (Spring 2021) 
//Week 5, Lab 1 (Julian Dates)
//Demo Time: 6:54 pm Feb 15th, 2021

#include <iostream>
using namespace std;

int Greg2Julian(int y , int m, int d);
void Julian2Greg(int JD, int & year, int & month, int & day);

int main() 
{
  int day;
  int month;
  int year;
  int jd;


  for( int i = 1100; i < 1501; i++){
    jd = Greg2Julian(i, 2, 29);
    Julian2Greg(jd, year, month, day);
		
    if(month == 2 && day == 29) cout << year << " is a leap year." << endl;
  }
  return 0;
}


int Greg2Julian(int y , int m, int d)
{
	int I = y; 
  int J = m;
	int K = d;

  int JD = K-32075 + 1461 * (I + 4800 + (J-14) / 12)/4 + 367 * (J-2-(J-14)/12*12)/12-3*((I+4900+(J-14)/12)/100)/4;

  return JD;
}

void Julian2Greg(int JD, int &year, int &month, int &day)
{
	int j, k ,i;
	
	int L = JD + 68569;
	int N = 4*L/146096;
	L = L-(146097*N+3)/4;
	i = 4000*(L+1)/1461001;
	L = L-1461 * i/4+31;
	j = 80*L/2447;
	k = L-2447*j/80;
	L = j/11;
	j = j+2 -12*L;
	i = 100*(N-49)+i+L;

	year = i;
	month = j;
	day = k;
}


