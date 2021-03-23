#include "Can.h"
#include <iostream>
using namespace std;

Can::Can() {
  type = 'X';
  volume = 'X';
}

Can::Can(string type, int volume){
  this->volume = volume;
  this->type = type;
}

void Can::setCan(string type, int volume) {
  this->volume = volume;
  this->type = type;
}

int Can::getVolume(){
  return this->volume;
}

string Can::getType() {
  return this->type;
}

//member operator
/*Can Can::operator+(Can &c) {
  Can can;
  if (this->getType() == c.getType()) {
    can.setCan(this->getType(), this->getVolume() + c.getVolume());
  }
  else {
    can.setCan("mixed", this->getVolume() + c.getVolume());
  }
  return can;
}*/

//non member 
Can operator+(Can &a, Can &b) {
  Can temp;
  if (a.getType() == b.getType()) {
    temp.setCan(a.getType(), a.getVolume() + b.getVolume());
  }
  else {
    temp.setCan("mixed", a.getVolume() + b.getVolume());
  }
  return temp;
}

//member operator
/*Can Can::operator-(Can &c) {
  Can can = *this;
  can.volume = can.getVolume() - c.getVolume();
  if (can.volume<0) {
	  can.volume = 0;
	  can.type = c.type;
  }
  return can;
}*/

//non member 
Can operator-(Can &a, Can &b) {
  Can temp;
  temp.setCan(a.getType(), a.getVolume() - b.getVolume());
  if((a.getVolume()-b.getVolume())<0){
	  temp.setCan(a.getType(), 0);
  }
  return temp;
}

ostream& operator<<(ostream &output, Can &can) {
  output << can.getType() << ":" << can.getVolume();
  return output;
}