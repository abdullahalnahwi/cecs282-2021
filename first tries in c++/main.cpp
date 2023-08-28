#include <iostream>

using namespace std;

class Can{
    private:
        int volume;
        string contents;
        int totalWeight;

    public: 
        void display(){
            cout << volume << " ounce can of "<< contents;
        }
        Can(){

            contents = "empty";
            volume = 0;
        }
        Can(int v,string c){
            contents = c;
            volume = v;
        }
        /* int total(){
            totalWeight = volume ;
        } */
        int getVolume(){
            return volume;
        }
};

int main(){
    Can c1(12,"pepsi\n");
    Can c2(16,"dew\n");
    Can c3(32,"water\n");
    Can c4(40,"miranda\n");
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    int totalVolume = c1.getVolume()+c2.getVolume()+c3.getVolume()+c4.getVolume();
    cout<< "the total weight of the cans is  "<< totalVolume <<endl;

    return 0; 
}
