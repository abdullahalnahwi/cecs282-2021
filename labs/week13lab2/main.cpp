// Scott Herron, Shirley Cho, Jojo Paris , Abdullah Alnahwi
// CECS 282-03
// Week 13 Lab 2: Maps
// Demo: 6:02pm

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {

  ifstream input;
  input.open("input.txt");
  
  string word;
  map<string,int> fileMap;
  
  while (input)
  {
    input >> word;
    fileMap[word]++;

    /*
    if (fileMap.find(word) == fileMap.end()) {
      fileMap.insert({word, 1});
    } else {
      fileMap[word]++;
    }
    */
  }

  map<string, int>::iterator it;
  for (it = fileMap.begin(); it != fileMap.end(); it++)
  {
    cout << it->first << " = ";
    cout << it->second;
    cout << endl; 
  }

}