//Luke Reissmueller, Abdullah Alnahwi, Andrew Wall, Linh Nguyen
//Lab 3 - Can Class Using Separate Header File
//2-01-2021
//Demo Time 5:48
#include <iostream>
#include "Can.h"
//#include "SixPack.h"

using namespace std;


int main() {
  int totalWeight = 0;
  Can sixPack[6];
  Can c1("Coke", 12);
  Can c2("Mango Monster Energy Drink", 16);
  Can c3("Red Bull", 8);
  Can c4("Bang!", 16);
  Can c5("Venom Energy", 16);
  Can c6("Jolt Cola", 12);
  sixPack[0] = c1;
  sixPack[1] = c2;
  sixPack[2] = c3;
  sixPack[3] = c4;
  sixPack[4] = c5;
  sixPack[5] = c6;
  
  for (int i = 0; i < 6; i++){
      sixPack[i].display();
      totalWeight += sixPack[i].getWeight();
  }
  cout << "The total weight of the cans is: " << totalWeight << " ounces." << endl;
}

