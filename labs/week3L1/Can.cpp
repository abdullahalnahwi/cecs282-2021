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

void Can::display()
{
  cout << weight << " ounces of " << contents << endl;
}