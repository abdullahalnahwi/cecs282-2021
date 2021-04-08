//Benjamin Nguyen, Abdullah Alnahwi , Francisco Rivera 
//Lab Week 12 2
//Demo Time: 6:30

#include <iostream>
#include "Line.h"
#include "Point.h"
using namespace std;

int main() {
  Line l(4, 6, 3, 1);
	Line l1(3,6,5,1); //  slope 
	//slope test
	double slope = l.slope();
	double slope1 = l1.slope();
	cout << slope << endl;
	cout << slope1 << endl;

  Point p1(5,3);
  Point p2(7,9);
  Point p3(5,3);
  cout<<"Point 1: "<<p1<< endl;
  cout<<"Point 2: "<<p2<< endl;
  cout<<"Point 3: "<<p3<< endl;

	
  cout << "Testing if points are equal: "<< endl;
  cout<<"p1 and p2: ";
  if (bool test = p1 == p2){
		cout<<"equal"<<endl;
	}else{
		cout<<"Not equal"<<endl;
	}
  //cout<<test;
  cout<<"\np1 and p3: ";
  if(bool test2 = p1 == p3){
		cout<<"equal"<<endl;
	}else {
		cout<<"Not equal"<<endl;
	}
  //cout<<test2<<endl;
  
	//distance test
	cout << "Distance between two points in line" << endl;
	double distance = l.length();
	cout << distance << endl;
	//cout << "Distance between two points\n";
  cout<<"Distance between p1 and p2: ";
  double distance2 = p1.distance(p2);
	cout<<distance2<<endl;
}