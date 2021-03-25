#ifndef Can_h
#define Can_h
#include<string>
#include <iostream>
using namespace std;

class Can {

private: 

  string type;
  int volume;

public:
  Can();
  Can (const Can &oldCan);
  Can(string type, int volume);
  ~Can();

  Can& operator=(const Can &other);
  void setCan(string type, int volume);

  int getVolume();

  string getType();

  void display();

  //Can operator+(Can &c);
  //Can operator-(Can &c);
};

Can operator+(Can &a, Can &b);
Can operator-(Can &a, Can &b);
Can max(Can can1, Can can2);

ostream& operator<<(ostream &output, Can &can);

#endif // CAN_H