//
// 
//  LinkedList_h
#ifndef LinkedList_h
#define LinkedList_h

#include "Student.h"
#include <stdio.h>
#include<string>
using namespace std;
struct node{
  Student data;
  node *next;
};
 
class list{
private:
    node *head, *tail;
   
public:
    list();
    ~list();
    int size();
    void add(Student);
    void addHead(Student);
    int deleteTail();
    //int deleteHead();
    void display();
    string to_string();
  
};
 
#endif /* LinkedList_h */