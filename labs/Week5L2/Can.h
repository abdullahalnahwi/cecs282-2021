#ifndef CAN_H
#define CAN_H

#include <string>
using namespace std;

class Can
{
  private:
    string contents;
    int weight;

public:
  Can();
  Can(string contents, int weight);
  void setCan(string contents, int weight);
  void display();
  void setWeight(int);
  void addContent(string);
  string getContent();
  int getWeight();
  void pour(Can c1,Can c2);
	Can mix(Can c1, Can c2);
  void stretch(Can c3);
};

#endif
