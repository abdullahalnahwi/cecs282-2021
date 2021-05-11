//Names: Michael Ching,Abdullah Alnahwi, Jafet Oidor Ortega , 
//Demo Time: 6:26PM


#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;


//Use typedef to define StrIntMap as map<string,int>
//YOUR CODE
typedef map<string, int> StrIntMap;

//Function countWord to count the number of word use in as filestream and words as a map container
//YOUR CODE
void countWords(istream& in, StrIntMap &words) {

  string s;

     while (in >> s) {
       //cout<< s << endl;
       //words[s] = 1;
        ++words[s];
     }
  }       

  int main()
   {
    //Define an ifstream object called in to associate the file data.txt
    //YOUR COE
    ifstream in("data.txt");
    
    if (!in)
        exit(EXIT_FAILURE);

    //Declare w as a map container - key as string , value as integer. Use type StrIntMap
    //YOUR CODE
   //__________________________________
  	//
    StrIntMap w;
	//typedef map<string , int> w; 

   
   //Call function countWords
   //YOUR CODE
     //____________________________________________
	 countWords(in, w);
     
     //Use a for loop and iterator today display the keys and values
     //YOUR CODE
  for (StrIntMap::iterator it = w.begin(); it != w.end(); ++it)
  {
     std::cout << it->second << " " << it->first << std::endl;
    
  }
   

   }
