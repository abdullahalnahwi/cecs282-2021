#include "Student.h"
#include <iostream>
#include<string>
 
using namespace std;
int Student::SID = 0; // intialized 

Student::Student(){
  name = "Gold";
  ID = 0;
  gpa = 2.0;
}

Student::Student(string n){
  name = n;
  ID = 0;
  gpa = 2.0;
}

void Student::setName(string n){
  this->name = n;
}

void Student::setGpa(double g){
  this->gpa = g;
}

double Student::getGpa()const{
  return gpa;
}

int Student::getId()const{
  return ID;
}

void Student::output()const{
  cout << "Student: " << name << ", GPA: " << gpa << endl;
}

string Student::toString() {
  string s = ""; 
  s = "Student: " + name + ", GPA: " + to_string(gpa) + "\n";
  return s;
}