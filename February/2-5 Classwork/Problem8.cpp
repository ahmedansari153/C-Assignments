// CIS 251 Section 300
//Instructor: Mark Whigham
//Programmer Name: Ahmed Ansari
//Project Description: Problem 8 from textbook chapter 2.
//Operating System: Windows 10
//IDE: Dev-C++
//Date Assigned 2-5-2019
//Date Due: 2-5-2019

#include<iostream> //Header file that contains the cin, cout, and endl functions
#include<iomanip>
#include<cmath>
#include<ctime>
#include<string> //Header file that contains the C++ string functions

using namespace std; //Points to the C++ library 
//C++ functions prototype goes below this line alone with global constant and variable declarations
int main() //c++ main function.
{
	//This is the basic structure of a C++ program.
	//declare local variables and constants
	double itemOne=15.95, itemTwo=24.95, itemThree=6.95, itemFour=12.95, itemFive=3.95, salesTax=0.07, subTotal, total, salesTaxTotal;
	cout << "Your Items Prices:" << endl;
	cout << "Item One: $" << setprecision(2) << fixed << itemOne << endl << "Item Two: $" << itemTwo << endl << "Item Three: $" << itemThree << endl << "Item Four: $" << itemFour << endl << "Item Five: $" << itemFive << endl;
	subTotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
	salesTaxTotal= subTotal * salesTax;
	total = salesTaxTotal + subTotal;
	cout << "Your Subtotal is: $" << setprecision(2) << fixed << subTotal << endl;
	cout << "Total Sales Tax is: $" << setprecision(2) << fixed << salesTaxTotal << endl;
	cout << "Your Total is: $" << setprecision(2) << fixed << total << endl;
	//Convert the algorithm to C++ code statements below this line
	return 0; //C++ return code
}
// C++ function declaration goes below this line.
