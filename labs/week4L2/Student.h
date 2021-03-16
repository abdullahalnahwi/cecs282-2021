#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student{
  private:
    std::string name;
    int score;
    char grade;

  public:
    Student();
    Student(std::string n, int s);

  void print();
};



#endif