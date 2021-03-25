//Authors: Toan Trinh, Abdullah Alnahwi, Soksery Chan
//Date:3/17/2021
//Week 10 Lab 2
//Demo: 6:07pm

#include "Can.h"
#include <iostream>

using namespace std;


int main()

{

    Can c1("Coke",12);

    Can c2("beans",20);

    Can c3 = c2;

    {

        Can c4("juice", 32);

        Can c5("juice", 12);

        c4 = c5;

        cout << "\n--------Can #4->";

        c4.display();

        cout << "\n--------Can #5->";

        c5.display();

    }

 

    c3 = max(c1, c2);

    cout << "\n--------Max size->";

    c3.display();

   
/*
    // the following code does not compile - why?

		//because the c4 and c5 went out of scope and the compiler  called the destructor delete c4 and c5.

     cout << "--------Can #4->";

     c4.display();              

     cout << "--------Can #5->";

     c5.display();
		 */

}