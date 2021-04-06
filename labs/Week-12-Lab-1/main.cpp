//Authors:Abdullah Alnahwi, Linh Nguyen, Steven Yacoub
//CECS 282: Week 12 Lab 1
//Demo Time: 6:27PM
/*
Modify lab Week 10-1 to use an object of class student store from the node instead of an integer value only. When you print your list output the student name and GPA.
Note: Implement the class Student definition.
*/

#include <string>
#include <iostream>
#include "LinkedList.h"

using namespace std;
int main(int argc, const char * argv[]) {
   
    std::cout << "Hello, World!\n";
    int a = 3;
    string s = "M";
    cout << s << a;
    s = s + to_string(a);
    cout << s;
    list myList;
    cout << myList.size();
    Student stu("Gold");
    Student stu1("James");
    stu1.setGpa(3.5);
    Student stu2("Jessie");
    stu2.setGpa(3.6);
		Student stu3("frank");
		stu3.setGpa(2.9);
    Student stu4("Franchesca");
    stu4.setGpa(2.7);
    //myList.deleteHead();
    myList.add(stu);
    myList.add(stu1);
    myList.add(stu2);
    myList.add(stu3);
    myList.addHead(stu4);
    myList.addHead(stu);
    myList.addHead(stu);
    
    cout << "\nSize..." << myList.size()<< endl;
    cout << myList.to_string();
    cout << "\nSize..." << myList.size()<< endl;
    cout << myList.to_string();
    cout << "\nDelete Tail.. " << myList.deleteTail();
    cout << "\nSize..." << myList.size()<< endl;
    cout << myList.to_string();
    return 0;
}