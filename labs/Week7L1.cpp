//Authors: Francisco Rivera, Caitlin Martinez, Abdullah Alnahwi, Daryl Nguyen
//Class: CECS 282-03
//Demo Time: 5:49pm

#include <iostream>
using namespace std; 


void swap (int *x1, int &y){
	int temp = *x1;
	*x1 = y;
	y = temp;
	
}


int main() {
	int x1 = 0;
	int y = 1;
	
	cout << "Unswapped:" << endl;
	cout << x1 << endl;
	cout << y << endl;
	
	swap(&x1, y);
	
	cout << "Swapped:" << endl;
	cout << x1 << endl;
	cout << y << endl;

	return 0;
}