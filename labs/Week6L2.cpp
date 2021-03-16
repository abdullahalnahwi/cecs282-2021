//Benjamin Nguyen,Abdullah Alnahwi, Jafet Oidor Ortega
//Demo Time: 6:30 pm 
#include <iostream>
#include <string>
using namespace std;

struct Car{
		string make;
		string model;
		int yof;
		string color;
		int mileage;
		int mpg;
		int salePrice;
};
void displayCars(Car carLot[]);

int main() {
	Car carLot[5];
  
  carLot[0].make = "Toyota";
  carLot[0].model = "Corolla S";
  carLot[0].yof = 2015;
	carLot[0].color = "red";
	carLot[0].mileage = 3000000;
	carLot[0].mpg = 20;
	carLot[0].salePrice = 80000;
  
  carLot[1] = {"BMW", "X5", 2021, "yellow", 60123, 30, 110000};
  
  carLot[2] = {"Dodge", "HellCat",2020,"Red",10000,20,35999};
  
  carLot[3] = {"Ferrari","458 Italia ",2005,"Matte Black",300,12,150000};
  carLot[4] = {"Lambo","huracan",2020,"yellow",10,13,200000};

  
  displayCars(carLot);
	
  return 0;
}

void displayCars(Car carLot[]){
  for(int i = 0; i < 5; i++){
    cout<< carLot[i].make<<"\n the model : " <<carLot[i].model<<"\n year of make :" <<carLot[i].yof<<"\n color: "<< carLot[i].color<<"\n mileage :"<<carLot[i].mileage<<"\n mpg "<<carLot[i].mpg<<"\n sale price: "<<carLot[i].salePrice<<endl;
  }
}
