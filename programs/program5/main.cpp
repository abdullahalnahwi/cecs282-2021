
#include<iostream>
#include<vector>
#include<time.h>
#include<climits> //for INT_MAX
#include<iterator>
#include<map>  // you will need this for the goldRabbits function
using namespace std;


class BigInt{
	private: 
		vector<char> digits;	//vector of characters called digits
	public:
		BigInt(); //default constructor
		BigInt(string);	//overloaded constructor -string parameter
		BigInt(int);	//overloaded constructor -int parameter
		BigInt operator+(BigInt) const; // BigInt + BigInt operator
		BigInt operator+(int); //BigInt + int operator
		BigInt operator++(int); // BigInt ++ operator
		BigInt operator-(int); //BigInt - int operator
		BigInt operator-(BigInt) const; //BigInt - BigInt operator
		bool operator==(int); // ==  int operator
		bool operator==(const BigInt&) const; // == BigInt operator
		bool operator<(int); // < int operator
		bool operator<(const BigInt&) const; // < BigInt operator
		bool operator<=(int); // <= int operator
		bool operator<=(const BigInt&) const; // <= BigInt operator
		friend ostream & operator<<(ostream & ,BigInt); // ostream 
		void print(); // print function 

};

void pause() //pause function 
{
	cout << "Press Enter to continue..."; getchar();
}

BigInt goldRabbits(BigInt); // prototype for BigInt goldRabbits 
int goldRabbits(int); // prototype for int goldRabbits function

int main()
{
cout << goldRabbits(BigInt(3000))<<endl;
BigInt B1("123456789123456789123456789123456789");
BigInt B2(B1);
BigInt MAX(INT_MAX);
cout << "B1:"<<B1<<"\nB2:"<<B2<<"\nMAX:"<<MAX<<endl;
pause();
cout << "\nB1:";
B1.print();
cout << endl;
pause();
for(BigInt i=0; i<=7; i++)// uncomment this
//for(int i=0; i<=3000; i++)// comment this out
{
cout << "\ngoldRabbits("<< i <<") = " << goldRabbits(i);
}
for(BigInt i=56; i<=66; i++)// uncomment this
//for(int i=0; i<=3000; i++)// comment this out
{
cout << "\ngoldRabbits("<< i <<") = " << goldRabbits(i);
}
for(BigInt i=2994; i<=3000; i++)// uncomment this
//for(int i=0; i<=3000; i++)// comment this out
{
cout << "\ngoldRabbits("<< i <<") = " << goldRabbits(i);
}
pause();
cout<< "\nThis is the value of goldRabbits(3000)\n\n";
BigInt gR3000 =  goldRabbits(BigInt(3000));
gR3000.print();
pause();
int n = 500;
try{
cout << "The value of goldRabbits(n) is:"<<goldRabbits(n)<<endl; 
}
catch(string error)
{
cout << error << endl;
cout << "Transitioning to BigInt\n";
cout << goldRabbits(BigInt(n));
}
pause();

}

// Modify this function so that it accepts BigInt as input parameter and returns a BigInt 
// and uses a map for speed

int goldRabbits(int n) // int goldRabbits funtion - int parameter
{
    if (n == 0 || n == 1) {   // base case
        return 1;
    }
    else{
        int fibo = goldRabbits(n - 1) + goldRabbits(n - 2);
        if (fibo < 0 ){
            string error = "Overflow error - goldRabbits Overflowed using "+to_string(n);

            throw(error);   
        }else {
            return fibo; 
        }

    }
}

BigInt goldRabbits(BigInt num) {	//BigInt goldRabbits function - BigInt parameter
	static map<BigInt,BigInt> rabbits; // static map called rabbits

    if (rabbits.find(num) != rabbits.end()) {
        return rabbits.find(num)->second;
    }
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        BigInt sum = goldRabbits(num - 1) + goldRabbits(num - 2);
        rabbits.insert({ num,sum });
    }
    return rabbits[num];

}

BigInt::BigInt() // default constructor 
{
	digits.push_back(0);
}

BigInt::BigInt(string num) //overloaded constructor 
{
	for (int i = num.size() - 1; i >= 0; i--)
	{
		digits.push_back(num[i]-'0');
	}
}

BigInt::BigInt(int num)  // overloaded constructor - int parameter
{
	string x = to_string(num);
	for (int i = x.size() - 1; i >= 0; i--)
	{
		digits.push_back(x[i]-'0');
	}
}

// operators 
BigInt BigInt::operator++(int) //++ operator
{
	return (*this) = (*this)+1;
}

BigInt BigInt::operator-(int num) //- int operator
{
	return (*this) - BigInt(num);
}

BigInt BigInt::operator-(BigInt num) const	//- BigInt operator
{
	BigInt ptr(*this);

	while (ptr.digits.size() != num.digits.size())
	{
		if (ptr.digits.size() > num.digits.size()){
			num.digits.push_back(0);
		}
		else{
			ptr.digits.push_back(0);
		}
	}
	for (size_t i = 0; i < ptr.digits.size(); i++)
	{
		if (ptr.digits[i] < num.digits[i]) 
		{
			ptr.digits[i] += 10;
			ptr.digits[i+1] -= 1;
		}
			ptr.digits[i] -= num.digits[i];
			if (ptr.digits[i] == 0 && num.digits[i] == 0 && i == ptr.digits.size()-1)
			{
				ptr.digits.erase(ptr.digits.end()-1);
			}
	
}
return ptr;
}

BigInt BigInt::operator+(BigInt num) const	//+ BigInt operator
{
	BigInt ptr(*this);

	while (num.digits.size() != ptr.digits.size()) 
	{
		if (num.digits.size() > ptr.digits.size())
		{
			ptr.digits.push_back(0);
		} 
		else 
		{
			num.digits.push_back(0);
		}
	}
	char n_carry = 0;
	for (int i = 0; i < ptr.digits.size(); i++)
	{
		if (n_carry == 1) 
		{
			n_carry = 0;
			ptr.digits[i] += 1;
		}
		if (ptr.digits[i] + num.digits[i] >= 10)
		{
			n_carry = 1;
		}
		ptr.digits[i] += num.digits[i] - n_carry * 10;
	}
	if (n_carry == 1)
	{
		ptr.digits.push_back(n_carry);
	}
return ptr;
}


BigInt BigInt::operator+(int num) // + int operator
{
	return (*this) + BigInt(num);
}

bool BigInt::operator==(const BigInt &num) const	// == BigInt operator
{
	bool condition = true;
	if (digits.size() == num.digits.size())
	{
		int i = 0;
		while (i < digits.size() && condition)
		{
			if (digits[i] != num.digits[i])
			{
				condition = false;
			}
			i++;
		}
	}
	else
	{
		condition = false;
	}
return condition;
}

bool BigInt::operator==(int num)	// == int operator
{
	return (*this) == BigInt(num);
}

bool BigInt::operator<(int num)	// < int operator
{
	return (*this) < BigInt(num);
}

bool BigInt::operator<=(int num)	//<= int operator
{
	return (*this) <= (BigInt(num));
}

bool BigInt::operator<(const BigInt &num) const	// < BigInt operator
{
	if(*this==num)
	{
		return false;
	}
	if(digits.size()<num.digits.size())
	{
		return true;
	}
	else if(digits.size()>num.digits.size())
	{
		return false;
	}
	else
	{
		int index = digits.size()-1;
		while(index>-1)
		{
		if(digits[index]>num.digits[index])
		{
		return false;
		}
		else if(digits[index]<num.digits[index])
		{
			return true;
		}
			index--;
		}
		return true;
	}
}

bool BigInt::operator<=(const BigInt &num) const	//<= operator
{
	return (*this) < (num) || (*this) == (num);
}

void BigInt::print()	// print function 
{
	for (int i = digits.size() - 1; i >= 0; i--)
	{
		cout << int(digits.at(i));
	}
}

ostream &operator<<(ostream &stream, BigInt x)	//ostream 
{
	if (x.digits.size() > 11)
	{
		for (int i = x.digits.size() - 1; i >= x.digits.size() - 11; i--)
		{
			stream << int(x.digits[i]);
			if (i == x.digits.size() - 1)
			{
				stream << ".";
			}
		}
		stream << "e" << x.digits.size() << endl;
	}
	else
	{
		x.print();
	}
return stream;
}





 