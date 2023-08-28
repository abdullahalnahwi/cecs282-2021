#include <iostream>

using namespace std;

class Dog{
    public:
        string name ;
        string color ;
        int age ; 

        void eat (string food1, string food2){
            cout << name << " is eating " << food1 << " and " << food2 << endl;
        }

        void run (string location, int speed){
            cout<< name << " is running to " << location<< " with " << speed <<" kmh "<< endl;
        }
};

int main (){
    Dog dog1;
    
    dog1.name = "Mikey";
    dog1.age = 5;
    dog1.color = "blue";
    dog1.eat("shit", "crap");
    dog1.run(" muscat " , 45 );

    return 0; 
    
}