//names : Abdullah Alnahwi, Frank Mancia, Soksery Chan
//demo time : 5:50pm

#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

Point::Point(){

    x = y = 0;

}

Point::Point(int a, int b){

    x = a;

    y = b;

}

void Point::setX(int a){

    x =a;

}

int Point::get(){

    return x;

}

void Point::outs() const{

    cout << "\n my point is ( " << x << ", " << y << ")";

}
int main() 
{
	//Declare a vector of point object -initialize it to have a minimum of three Point objects-
  vector<Point> pt(3, Point(2, 6));
  //Declare an iterator to the vector
  vector<Point>::iterator itr;
  //Using begin() and end() vector functions output the vector you declared in step 1 using the iterator you declared in step 2
  for (itr = pt.begin(); itr < pt.end(); itr++)
  {
	  itr->outs();
  }
  cout <<endl;
   //Insert another Point object using the push_back() function 
   pt.push_back(Point());
   //Output the vector content as you did in step 3 (repeat step 3)
    for (itr = pt.begin(); itr < pt.end(); itr++)
  {
	  itr->outs();
  }
  cout << endl;
	//Using the insert() function insert a Point object element at the beginning of the vector
  pt.insert(pt.begin(),Point());
  //repeat step3 
  for (itr = pt.begin(); itr < pt.end(); itr++)
  {
	  itr->outs();
  }
  cout <<endl;
  //Erase the first element in the vector using the erase() function and the iterator
  pt.erase(pt.begin());
  
  ////repeat step3 
  for (itr = pt.begin(); itr < pt.end(); itr++)
  {
	  itr->outs();
  }
  return 0;
}