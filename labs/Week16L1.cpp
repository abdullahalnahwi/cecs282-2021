//Name: Shirley Cho, Carson Faatz, Chris Pham, Abdullah Alnahwi
//Lab: Week 16 Lab 1: Inheritence
//Date:5/3/2021
//Demo Time: 5:50 pm

#include<iostream>
#include<iomanip>

using namespace std;



class pointType {
	public:
		void setPoint(double x, double y);
		void print() const;
		double getX() const;
		double getY() const;
		pointType(double x = 0.0, double y = 0.0);
	
	protected:
		double xCoordinate;
		double yCoordinate;
};
class circleType: public pointType {
	public:
		void print() const;
		void setRadius(double r);
		double getRadius() const;
		double getCircumference() const;
		double getArea() const;
		circleType(double x = 0.0, double y = 0.0, double r = 0.0);
	
	protected:
		double radius;
};
class cylinderType: public circleType {
	public:
		void print() const;
		
		void setHeight(double h);
		void setBaseCenter(double x, double y);
		void setCenterRadiusHeight(double x, double y,
		double r, double h);
		
		double getHeight() const;
		double getVolume() const;
		double getSurfaceArea() const;
		cylinderType(double x = 0.0, double y = 0.0,
		double r = 0.0, double h = 0.0);
	
	protected:
		double height;
};
void pointType::setPoint(double x, double y) {
	xCoordinate = x;
	yCoordinate = y;
}

void pointType::print() const {
	cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;
}

double pointType::getX() const {
	return xCoordinate;
}

double pointType::getY() const {
	return yCoordinate;
}

pointType::pointType(double x, double y) {
	xCoordinate = x;
	yCoordinate = y;
}
void circleType::print() const {
	cout << "Base Center: ";
	pointType::print();
	cout << endl;
	
	cout << "Base Radius: " << radius << endl;
	cout << "Base Circumference: " << getCircumference() << endl;
	cout << "Base Area: " << getArea() << endl;
}

void circleType::setRadius(double r) {
	radius = r;
}

double circleType::getRadius() const {
	return radius;
}

double circleType::getCircumference() const {
	return (2 * 3.1416 * radius);
}

double circleType::getArea() const {
	return (3.1416 * radius * radius);
}

circleType::circleType(double x, double y, double r)
:pointType(x,y) {
	radius = r;
}
//YOUR CODE TO IMPLMENT THE CONSTRUCTORS AND FUNCTIONS IN THE CLASS Cylinder

cylinderType::cylinderType(double x , double y,
double r, double h)
{
  setPoint(x,y);
  setRadius(r);
  setHeight(h);
  
}

void cylinderType::print() const
{
	cout << "Base Center: ";
	pointType::print();
	cout << endl;

	cout << "Base Radius: " << radius << endl;
	cout << "Base Circumference: " << getCircumference() << endl;
	cout << "Base Area: " << getArea() << endl;
  cout << "Cylinder height: " << getHeight() << endl;
  cout << "Cylinder surface area: " << getSurfaceArea() << endl;
  cout << "Cylinder volume: " << getVolume() << endl;
}

void cylinderType::setHeight(double h){
  height = h;
}

void cylinderType::setBaseCenter(double x, double y)
{
  setPoint(x, y);
}
void cylinderType::setCenterRadiusHeight(double x, double y,
double r, double h)
{
  setPoint(x, y);
  setRadius(r);
  setHeight(h);
}

double cylinderType::getHeight() const
{
	return height;
}
double cylinderType::getVolume() const
{
  return getArea() * height;
}
double cylinderType::getSurfaceArea() const
{ //2pirsquared + 2pirh
	//return  (2 * 3.1416 * radius * radius) + (2 * 3.1416 * radius * height);
  return 2 * getArea() + getCircumference() * height;
}

	

int main()
{
cylinderType cylinder1(3, 2.5, 4, 2.5);
cylinderType cylinder2;

cout << fixed << showpoint;
cout << setprecision(2);

cout << "***** Cylinder 1 *****" << endl;
cylinder1.print();
cout << endl;

cylinder2.setPoint(-2.5, 7);
cylinder2.setRadius(4);
cylinder2.setHeight(3.9);
cout << "***** Cylinder 2 *****" << endl;
cylinder2.print();
cout << endl;

double x, y;
double r;
double h;

cylinderType cylinder3;

cout << "Enter x Coordinates of the center: ";
cin >> x;
cout << endl;

cout << "Enter y Coordinate of the center: ";
cin >> y;
cout << endl;

cout << "Enter base radius: ";
cin >> r;
cout << endl;

cout << "Enter cylinder height: ";
cin >> h;
cout << endl;

cylinder3.setCenterRadiusHeight(x, y, r, h);

cout << "***** Cylinder 3 *****" << endl;
cylinder3.print();
cout << endl;

return 0;
}
