#include "LinkedList.h"
#include "Student.h"
#include <iostream>
#include<string>
 
using namespace std;
list::list(){
    head=NULL;
    tail=NULL;
}
 
list::~list(){
  node *n = this->head, *current = NULL; //initialization part
   
  while(n){   //start cleanup of nodes of the list
    current = n;
    n=n->next;
    delete(current);
  }     
  head = tail = NULL;
}
 
int list::size(){
    node *cur=new node;
    cur=head;
    int size = 0;
    while(cur!=NULL){
        size++;
        cur=cur->next;
    }
    return size;
}

void list::add(Student s){
    node *newNode = new node;
    newNode->data = s;
    newNode->next = NULL;

    if(head == NULL){
      head = newNode;
      tail = newNode;
    }else{
      tail->next = newNode;
      tail = newNode; 
    }
}
 
void list::addHead(Student s){
    node *newest=new node;
    newest->data=s;
    newest->next=head;
    head=newest;
}
 
int list::deleteTail(){
   node* curr = head;
   if(head == NULL){
     return 0;
   }else{
     while(curr->next!=NULL){
       if(curr->next==tail){
         tail = curr;
         tail->next = NULL;
         return 0;
       }
       curr = curr->next;
     }
   }

   return 0;    
}
 
void list::display(){
    node *cur=new node;
    cur=head;
    while(cur!=NULL){
      cur->data.output();
      cur=cur->next;
    }
}


string list::to_string(){
    string str = "";
    node *temp=new node;
    temp=head;
    while(temp!=NULL){
      str = str + temp->data.toString() ;
      temp=temp->next;
    }
    return str;
}


//string d = to_string(upptr[1]);
	//string y = to_string(upptr[2]);
