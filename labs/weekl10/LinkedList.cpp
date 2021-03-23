#include "LinkedList.h"
#include <iostream>
#include<string>
 
using namespace std;
list::list()
{
    head=NULL;
    tail=NULL;
}
 
list::~list(){   
  node *n = this->head, *current = NULL; //initialization part   
  while(n)   //start cleanup of nodes of the list
  {
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
  while(cur!=NULL)
  {
    size++;
    cur=cur->next;
  }
  return size;
}
//at the end of the list
void list::add(int value)
{
  node *newest = new node;
  newest->data = value;
  if(head == NULL){
    head = tail = newest;
  }else{
    tail->next = newest; 
    tail = newest;
  }
} 

void list::addHead(int value)
{
  node *newest=new node;
  newest->data=value;
  newest->next=head;
  head=newest;
}
 
int list::deleteTail(){
  node* s = head;
  int deleted = -1;
  if (s == NULL){
		return deleted;
	}
	if (s->next == NULL) { 
    deleted = head->data;
    delete head; 
    return deleted; 
  } 
	while (s->next->next != NULL){
		s = s-> next;
	}
  deleted = s->next->data;
	delete (s->next);
	s->next = NULL;
  tail = s;
	return deleted; 

}
 
void list::display()
{
  node *cur=new node;
  cur=head;
  while(cur!=NULL)
  {
    cout<<cur->data<<"\t";
    cur=cur->next;
  }
}
 
string list::to_string()
{
  string str = "";
  node *temp=new node;
  temp=head;
  while(temp!=NULL)
  {
    //in java I can str + int
    str = str + ::to_string(temp->data) + "\t";
    temp=temp->next;
  }
  return str;
}