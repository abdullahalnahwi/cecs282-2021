//Authors: Yuvika Nibber, Steven Yacoub, Jojo Paris, Abdullah Alnahwi
//CECS282: Week 14 Lab 1
//Demo Time: 6:05 PM
/*
Write an iterative and a recursive function to calculate x^ y without using the power function. (x and y are real values that can be entered by the user) 

You should always use a clear prompt and annotation messages for inputs and outputs

Write a main function to demo your power function. Calculate the following:

in a loop from 2 ^ 0 ->2 ^ 35

Explain any anomalies.

*/
#include <iostream>
using namespace std;

int powRecursive(int x, int y){
  if(y <= 0){
    return 1;
  }
  return x * powRecursive(x, y - 1);
}

int powIter(int x, int y){
  int result = 1;
  for(int i = 0; i < y; i++){
    result *= x; 
  }  
  return result;
}

int main() {
  cout << "Hello World!\n";

  cout << powRecursive(2, 4) << endl;

//overflow: so big that it loops around from being too big that it becomes super small
  cout << "Iterative" << endl;
  for(int i = 0; i < 36; i++){
    cout << "2 to the pow of " << i << ": " << powIter(2, i) << endl;
  }

  cout << endl;
  
  cout <<"\nRecursive" << endl;
  for(int i = 0; i < 36; i++){
    cout << "2 to the pow of " << i << ": " << powRecursive(2, i) << endl;
  }

  
}



//11111111 + 11111111 = 
// 8 bits for instance and then


//1111 = 15 
//16 cant do in 4 bits
// so u have to do it in 8 bits and so on 




