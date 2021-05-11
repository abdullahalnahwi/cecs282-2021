// Names: Frank Alvarez, Carl Borillo, Abdullah Alnahwi, Daryl Nguyen
// Week 14 Lab 2
// Demoed 6:13PM


#include <iostream>
#include <climits>
using namespace std;
int safeAdd(int first, int second){
	
	int numba = first + second;

	if (numba >0){
		return numba;
	}else{
		string str = "Integer Overflow Error";
		throw(str);
	}

}
int main() {
	int array1[] = {INT_MAX,INT_MAX, 1 , 42};
	int array2 [] = {INT_MAX, 1,200,1200};

    for (int i = 0 ; i<4;i++){
		try{

			int sum = safeAdd(array1[i],array2[i]);
			cout << array1[i] << " + " << array2[i] <<  " = "<< sum <<endl;

		} catch( string error){

		cout << error << ": " << array1[i] << " , " << array2[i] << endl;
	}
  }
    return 0;  
}