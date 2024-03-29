//

//  Line.cpp

//  Composition

//
#include "Line.h"
#include "Point.h"
#include <math.h>
#include <iostream>

using namespace std;

 

// helper initialization function
void Line::init(int x1, int y1, int x2, int y2){
  p1 = new Point(x1, y1);
  p2 = new Point(x2, y2);
}
 

 

// normal constructor
Line::Line(int x1, int y1, int x2, int y2){
  // p1 = new Point(x1, y1);
  // p2 = new Point(x2, y2);
  init(x1,y1,x2,y2);
}
 

 

// "copy constructor"

Line::Line(const Line& line) {

    p1 = new Point(line.getX1(), line.getY1());

    p2 = new Point(line.getX2(), line.getY2());

}

 

// destructor

Line::~Line() {

    delete p1;

    delete p2;

}

 

// overloaded assignment = operator

const Line& Line::operator=(const Line& rhs) {

    if (this != &rhs) {

        delete p1;

        delete p2;

        init(rhs.getX1(), rhs.getY1(), rhs.getX2(), rhs.getY2());

    }

    return *this;   // always return *this from =

}

 

 

int Line::getX1()const {

    return p1->getX();

}

 

int Line::getY1()const {

    return p1->getY();

}

 

int Line::getX2()const {

    return p2->getX();

}

 

int Line::getY2()const {

    return p2->getY();

}

//Write the length function using the distance function
double Line::length() const {
	//formula sprt((X2-X1)^2+(Y2-Y1)^2)
  double dx = p2->getX() - p1->getX();

  double dy = p2->getY() - p1->getY();

  return sqrt(dx*dx + dy*dy);
	
}
 

 

//Write the slope function
double Line::slope() const{ 
	//p2gety - p1gety
	double dx = p2->getX() - p1->getX();
  double dy = p2->getY() - p1->getY();

	return dy/dx;
}
 

 

void Line::translate(int dx, int dy) {

    p1->translate(dx, dy);

    p2->translate(dx, dy);

}