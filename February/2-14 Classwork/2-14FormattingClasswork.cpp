// CIS 251 Section 300
//Instructor: Mark Whigham
//Programmer Name: Ahmed Ansari
//Operating System: Windows 10
//IDE: Dev-C++
//Date Assigned 2-14-2019

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
	double number1 = 10.245, number2=0.00, number3=0.00;
	const double PI = 3.1459;
	string header1 = "CIS251 C++ programming", header2 = "SECTION 300", 
	footer1="Calhoun Comminuty COllege", footer2="Page Number";
	//Convert the algorithm to C++ code statements below this line
	cout << "unformatted report" << endl;
	cout << header1 << "\t" << header2 <<endl;
	cout << "CIST251 Formatting Report" << endl;
	cout << "First Number" << "Second Number" << "Third Number" << "Value of PI" << endl;
	cout << number1 << "\t" << number2 << "\t" << number3 << "\t" << PI << endl;
	cout << "Prepared by: Ahmed Ansari" << endl;
	cout << "Prepared for: Formatting Output Mark Whigham" << endl;
	cout << footer1 << footer2 << "\n \n \n";
	
	cout << setw(22) << header1 << setw(11) << header2 << endl;
	header1 = "CIS251 C++ ";
	cout << setw(22) << header1 << setw(11) << header2 << endl;
	cout << setw(22) << left << header1 << setw(11) << header2 << endl;
	
	cout << setprecision(9) << number1 << "\t" << number2 << "\t" << number3 << "\t" << PI << endl;
	
//	cout << setw(20) << left << "First Number" << setw(20) << left << "Second Number" << setw(20) << left << "Third Number" <<  setw(20) << left << "Value of PI" << endl;
//	cout << setw(20) << left << number1 << setw(20) << left << number2 <<  setw(20) << left << number3 <<  setw(20) << left << PI << endl;
	
	return 0; //C++ return code
}
// C++ function declaration goes below this line.
