//
//  Student.h
//  StudentLinkedList
//
 
#ifndef Student_h
#define Student_h
#include <string>
#include <stdio.h>
 
using namespace std;
class Student{
private:
    string name;
    double gpa;
    int ID;
    static int SID;

public:
    Student();
    Student(string name);
    void setName(string n);
    void setGpa(double g);
    double getGpa()const;
    int getId()const;
    void output()const;
    string toString();

};

#endif /* Student_h */