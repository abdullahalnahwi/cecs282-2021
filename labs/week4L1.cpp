//Authors: Steven Yacoub, Abdullah Alnahwi,  Daryl Nguyen
//Class: CECS 282-03
//Demo Time: 6:53 PM

#include <iostream>

using namespace std;

class Airplane{
	private:
		string model;
		int maxAltitude;
		int minAltitude;
		int altitude;

	public:
		
		Airplane(string m, int min, int max){
			model = m;
			minAltitude = min;
			maxAltitude = max;
			setAltitude();
		}

		void display(){
			cout<<"model: "<<model<< " altitude : "<<altitude<<endl;
		}
		void setAltitude(){
			altitude = 0;
      //srand(time(NULL));
			altitude = (rand()%(maxAltitude-minAltitude+1))+ minAltitude;
		}

		bool crash(Airplane a){
				//cout<< "u enterred crash";
				//a.display();
				//display();
        if (abs(altitude - a.altitude) <= 200) {
          return true;
        }
    return false;
		}
};

int main() {
  Airplane a1("Boeing 747", 2500, 3000);
	Airplane a2("Lear jet ", 2000, 2650);
	Airplane a3("MIG Fighter", 2600, 3000);
	//bool crash(Airplane a);
    
    int counter = 0;
    
	for(int i = 0; i <= 1000; i++) {
    a1.setAltitude();
		a3.setAltitude();
		a2.setAltitude();

		if (a2.crash(a1))
		{
			a1.display();
			a2.display();

    	counter++;
		
		}    
  }

  cout <<"Times Crashed: "<< counter;

	return 0;
}