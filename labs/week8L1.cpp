//Abullah Alnahwi , Chris Pham, Linh Nguyen, Jojo Paris
//demo time: 6:19 pm 
#include <iostream>
//#include<cstring>
using namespace std;
int strlen(char * s)
{
  int a = 0;
  while(s[a] != 0){
    a++;
  }
  return a;
}
char * strcat(char *dest, char *source)// returns address of dest, also concatenates source to the end of dest.
{
for(int i = 0 ; i<strlen(source);i++){
	dest[strlen(dest)]=source[i];
	}
dest[strlen(dest)] = '\0';
return dest;
} 

char *strcpy(char *dest, char *source)
{
  while(*dest++ = *source++);
  return dest;
}


int main() {
  char name[15] = "anything";
  	cout << strlen(name) << endl;
  
  char cat[10] = "cat";
  strcat(name, cat);
  cout << name << endl;
  
  strcpy(name, cat);
  cout << name << endl;
  
  return 0;
}