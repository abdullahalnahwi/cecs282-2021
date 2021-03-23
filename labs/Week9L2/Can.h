#ifndef Can_h
#define Can_h
#include<string>
using namespace std;

class Can {

private: 

  string type;
  
  int volume;

public:
  Can();
  
  Can(string type, int volume);
  
  void setCan(string type, int volume);

  int getVolume();

  string getType();

  void display();

  //Can operator+(Can &c);
  //Can operator-(Can &c);
};

Can operator+(Can &a, Can &b);
Can operator-(Can &a, Can &b);

ostream& operator<<(ostream &output, Can &can);

#endif // CAN_H