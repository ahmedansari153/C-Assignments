/*
	Ahmed Ansari
	Mark Whigam CIS251
	Date: 4-4-19
	
	Write a program that will create a division function. Validate
	the input by checking for a divide by 0 error. If one of the divisor = 0
	use the exit function to terminate the divison process. 
	Prompt the user for two numbers a, and b, and store the results in a variable called results.
*/
#include<iostream>
#include<cmath>
#include<cstdlib> //contains the exit function

using namespace std;

int divide(int, int, bool);

int main()
{
	int a, b, results, xremainder;
	bool remainder = false;
	cout << "Enter first number " << endl;
	cin >> a;
	cout << "Enter second number " << endl;
	cin >> b;
	results = divide(a, b, remainder);
	remainder = true;
	xremainder = divide(a, b, remainder);
	
	cout << "The answer is " << results << endl;
	cout << "The remainder is " << xremainder << endl;
	
	return 0;
}

int divide(int a, int b, bool r)
{
	int results, xremainder;
	if (b == 0 || a == 0)
	{
		cout << "Error - Cannot divide by 0" << endl;
		_Exit (EXIT_FAILURE);
	}
	else
	{
		results = a/b;
		xremainder = a % b;
	}
	if(r==false)
	{
		return results;
	}
	else
	{
		return xremainder;
	}
	
}
