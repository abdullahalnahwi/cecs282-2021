// Authors: Scott Herron, Abdullah Alnahwi, Steven Yacoub, Kevin Garcia
// CECS 282-03: Week 13 Lab 1
// Demo: 6:02 PM

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> //for accumulator operations
using namespace std;

int main(){
  // an array of doubles
  double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };

  // Determine the array size
  int arrsize = sizeof(arr)/sizeof(arr[0]);

  // initialize vector v1 to array arr
  vector<double> v1(arr, arr + arrsize);

  cout << "v1: ";
  //Display the contents of vector v1
  for (double i : v1) {
    cout << i << " ";
  }
  cout << endl;

  // Sorting the Vector in Ascending order
	cout << "Ascending v1: ";
  sort(v1.begin(), v1.end(), less<double>());

  // Display the content of vector v1 after sorting
  for (double i : v1) {
    cout << i << " ";
  }
  cout << endl;
		
  // Reversing the Vector v1
  cout << "Reversing v1: ";
  sort(v1.begin(), v1.end(), greater<double>());
  
  // Display the content of vector v1
  for (double i : v1) {
    cout << i << " ";
  }
  cout << endl;

  // Display the maximum element of vector v1
  cout << "Max v1: ";
	double max = *max_element(v1.begin(), v1.end());
	cout<< max << endl;
  
  // Display the minimum element of vector v1
  cout << "Min v1: ";
	double min = *min_element(v1.begin(), v1.end());
  cout<< min << endl;

  // Display the accumulation of all elements in vector v1
  // Starting the summation from 0
  double accumulation = 0;
  for(double i : v1) {
    accumulation += i;
  }
  cout << "Accumulation: " << accumulation << endl;
  
  // Counts the occurrences of 2.2 from 1st to last element
  double count = 0;
  for(double i : v1) {
    if (i == 2.2) {
      count++;
    }
  }

  // Display the counts
  cout << "Total count of '2.2' in v1: " << count << endl;

  // Delete second element of vector
  cout << "Removing 2nd v1 element: ";
  v1.erase(v1.begin()+1, v1.begin()+2);
  
  // Display the v1 after erasing the element
  for(double i : v1) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}