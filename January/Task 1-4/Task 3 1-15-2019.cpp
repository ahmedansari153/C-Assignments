// CIS 251 Section 300
//Instructor: Mark Whigham
//Programmer Name: Ahmed Ansari
//Project Description: Task 1-4
//Operating System: Windows 10
//IDE: Dev-C++
//Date Assigned 1-15-2019
//Date Due: 1-15-2019

#include<iostream> //Header file that contains the cin, cout, and endl functions
#include<string> //Header file that contains the C++ string functions

using namespace std; //Points to the C++ library 
//C++ functions prototype goes below this line alone with global constant and variable declarations
int main() //c++ main function.
{
	//This is the basic structure of a C++ program.
	//declare local variables and constants
	int num1, num2, sum;
	//Convert the algorithm to C++ code statements below this line
	cout << "What is the first number you want to add? " << endl;
	cin >> num1;
	cout << "What is the second number you want to add? " << endl;
	cin >> num2;
	
	sum = num1+num2;
	
	cout << "The sum is " << sum <<endl;
	
	return 0; //C++ return code
}
// C++ function declaration goes below this line.
