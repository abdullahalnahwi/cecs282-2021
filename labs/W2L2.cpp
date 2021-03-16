//Abdullah Alnahwi, Scott Herron, Daniel Lam
// week 2 lab 2 
// 01/27/2021, Time Demoed: 5:53PM

#include <iostream>
using namespace std;

class Can
{
  public:
		Can();
    Can(string, int);
    void display();
    int getWeight();
  private:
    string contents;
    int weight;
};

int main() {
  int total = 0;
	Can c1("Pepsi",12);
	Can c2("Pears",16);
	Can c3("mustard",32);
	Can c4("Apple Juice", 40);

  c1.display();
  c2.display();
  c3.display();
  c4.display();

  total = c1.getWeight() + c2.getWeight() + c3.getWeight() + c4.getWeight();
  cout << "The total can weight is " << total << " ounces." << endl;

	return 0;
}

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

void Can::display() {
  cout << weight << " ounce can of " << contents << endl;
}

int Can::getWeight()
{
  return weight;
}
