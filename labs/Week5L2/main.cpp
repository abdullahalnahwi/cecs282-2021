//Benjamin Nguyen,Jonathan Santos,Carl Borillo, Abdullah Alnahwi
//CECS 282 (Spring 2021) 
//Week 5, Lab 2 (Stretch Can) 
//Demo Time:  6:31 pm February 17, 2021

#include "Can.h"
#include <iostream>
using namespace std;

void pour(Can & c1, Can & c2){
  int c1weight = c1.getWeight();
  int c2weight = c2.getWeight();
  //string c1contents = c1.getContent();
  //string c2contents = c2.getContent();
  c1.setWeight(c2weight + c1weight);
  c2.setWeight(0);
  c1.addContent(c2.getContent());
  c2.addContent("empty");
}

Can mix(Can &c1, Can &c2)
{
	
	int totalweight = c1.getWeight()+ c2.getWeight();
	string totalcontents = c1.getContent() +" "+ c2.getContent();
  Can c3(totalcontents, totalweight);
	return c3;
}

void stretch(Can &c3,int value)
{
	c3.setWeight(c3.getWeight()+value);
}

int main()
{
     Can c1("Peaches", 15);
     Can c2("Peas", 20);
     Can c3("soup", 24);
     Can c4 = mix(c1,c3); // c4 will have a mixture of c1 and c3. c1 and c3 remain unchanged
     pour(c2,c1); // pour c1 into c2. c1 will be empty
     stretch(c3,20); // stretch c3 by 20 ounces
     cout << "C1 - ";
     c1.display(); // empty:0
     cout << "C2 - ";
     c2.display(); // Peas,Peaches:35
     cout << "C3 - ";
     c3.display(); // soup:44
     cout << "C4 - ";
     c4.display(); // Peaches, soup:39

     return 0;
}