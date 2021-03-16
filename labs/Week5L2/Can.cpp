#include "Can.h"
#include <iostream>
#include <string>
using namespace std;

Can::Can()
{
  contents = "empty";
  weight = 0;
}

Can::Can(string c, int w)
{
  contents = c;
  weight = w;
}
/*void Can::setCan(string type,int weight) {
  contents = type;
  weight = ;
}*/

void Can::setWeight(int newWeight){
  weight = newWeight;
}

void Can::addContent(string newContent){
  contents += " and " + newContent;
}

string Can::getContent(){
  return contents;
}
void Can::display()
{
  cout << weight << " ounces of " << contents << endl;
}

int Can::getWeight(){
    return weight;
}