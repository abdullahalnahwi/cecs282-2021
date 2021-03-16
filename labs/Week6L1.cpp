// Abdullah Alnahwi, Quoc Ngo , Jafet Oider Ortega, Johnerson Li
// Class (CECS 282-03)
// Week 6 - Lab 1 - Pointers
// Demo Time: 02/22/2021 6.00pm

#include <iostream>

using namespace std;


int main() {
  //a) Declare  long variables value1 and value2.  The variable value1 has been initialized to 200000.  Declare the variable longPtr to be a pointer to an object of type long.
  long value1 = 200000;
	long value2;

  //b) Assign the address of variable value1 to pointer variable longPtr.
	long *longPtr;
	longPtr = &value1;

  //c) Display the value of the object pointed to by longPtr.
  cout <<"Value of value 1 : "<< *longPtr << endl; 
	//cout<< "address of value 1 : "<< longPtr<< endl;

  ////d) Assign the value of the object pointed to by longPtr to variable value2.
  value2 = *longPtr;
	
  //e) Display the value of value2.
  cout <<"Value of value 2 : "<< *longPtr << endl; 
	//cout<< "Address of value 2 : "<< longPtr << endl;
  
  //f) Display the address of value1.
  cout << "Address of value 1: " << &value1 << endl;

  //g) Display the address stored in longPtr. 
  cout << "Value of longPtr: " << longPtr << endl;
	
  system("pause");
  return 0;
}