// Daniel Lam, Jake Horne, Quoc Ngo, Abdullah Alnahwi
// CECS 282 - Week 16 Lab 2
// Date: 5/5/2021
// Demo Time: 6: 3PM

#include <string>
#include <iostream>
#include <math.h>
#include <limits>


using namespace std;
template <typename T>
T fibo(T n)
{
  T result;
  
  T x = 1, y = 1, z = 0;

   for (T i = 0; i < n; i++) {
      // cout << x << " ";
      z = x + y;
      x = y;
      y = z;

      // cout << "z=" << z <<endl;
      // cout << "x=" <<x <<endl;
      // cout << "y=" <<y <<endl;

      if (z<0 || z > numeric_limits<double>::max())
      {
		    string error = "Overflow error! Overflowed using " + to_string((int)i);
        throw error;   
      }
      
   }
   result = z;
  return result;
}

int main() {

  short s1 = 500;
  char s2 = 127;
  int s3 = 500;
  long s4 = 500;
  float s5 = 500;
  double s6 = 500;

  
  //Short Catch
	try 
	{
		cout << "\nData type short has " << sizeof(fibo(s1)) << " bytes." << endl;
		cout << "Fibonacci("<<s1<<") is:"<< fibo(s1);
	}
	catch(string error)
	{
		cout << "Fibonacci of"<< error << endl;  
	}
  
  // Char catch
	try 
	{
		cout << "\nData type char has " << sizeof(fibo(s2)) << " bytes." << endl;
		cout << "Fibonacci("<<(int)s2<<") is:"<< fibo(s2) << endl;
	}
	catch(string error)
	{
		cout << "Fibonacci of"<< error << endl;  
	}

  //Int catch
	try 
	{
		cout << "\nData type int has " << sizeof(fibo(s3)) << " bytes." << endl;
		cout << "Fibonacci("<<s3<<") is: "<< fibo(s3) << endl;
	}
	catch(string error)
	{
		cout << "Fibonacci of"<< error << endl;  
	}
	
  //Long catch
	try 
	{
		cout << "\nData type long has " << sizeof(fibo(s4)) << " bytes." << endl;
		cout << "Fibonacci("<<s4<<") is: "<< fibo(s4) << endl;
	}
	catch(string error)
	{
		cout << "Fibonacci of"<< error << endl;  
	}
	
  //Float catch
	try 
	{
		cout << "\nData type float has " << sizeof(fibo(s5)) << " bytes." << endl;
		cout << "Fibonacci("<<s5<<") is: "<< fibo(s5) << endl;
	}
	catch(string error)
	{
		cout << "Fibonacci of"<< error << endl;  
	}

  //Double Catch
	try 
	{
		cout << "\nData type double has " << sizeof(fibo(s6)) << " bytes." << endl;
		cout << "Fibonacci(" << s6 <<") is: "<< fibo(s6) << endl;
	}
	catch(string error)
	{
		cout << "Fibonacci of "<< error << endl;  
	}

  return 0;
}