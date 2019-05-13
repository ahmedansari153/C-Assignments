// CIS 251 Section 300
//Instructor: Mark Whigham
//Programmer Name: Ahmed Ansari
//Project Description: Task 1-4
//Operating System: Windows 10
//IDE: Dev-C++
//Date Assigned 1-15-2019
//Date Due: 1-15-2019

#include<iostream> //Header file that contains the cin, cout, and endl functions
#include<iomanip>
#include<cmath>
#include<ctime>
#include<string> //Header file that contains the C++ string functions

using namespace std; //Points to the C++ library 
//C++ functions prototype goes below this line alone with global constant and variable declarations
void menu();
int main() //c++ main function.
{
	//This is the basic structure of a C++ program.
	//declare local variables and constants
	int option, number;
	char input;
	do
	{
		system("cls");
		menu();
		cout << "Enter an option in the range of 1-5" << endl;
		cin >> option;
		//Convert the algorithm to C++ code statements below this line
		switch(option)
		{
			case 1: cout << "You selected option 1" << endl;
					cout << "Enter a number in the range of 1-10" << endl;
					cin >> number;
					if( (number >= 1) && (number <= 10))
					{
						cout << "with in the range" << endl;
						if(number == 1)
							cout << "The roman numeral value is I" << endl;
						if(number == 2)
							cout << "The roman numeral value is II" << endl;
						if(number == 3)
							cout << "The roman numeral value is III" << endl;
						if(number == 4)
							cout << "The roman numeral value is IV" << endl;
						if(number == 5)
							cout << "The roman numeral value is V" << endl;
						if(number == 6)
							cout << "The roman numeral value is VI" << endl;
						if(number == 7)
							cout << "The roman numeral value is VII" << endl;
						if(number == 8)
							cout << "The roman numeral value is VIII" << endl;
						if(number == 9)
							cout << "The roman numeral value is IX" << endl;
						if(number == 10)
							cout << "The roman numeral value is X" << endl;
					}
					else
					{
						cout << "invalid outside of the range" << endl;
					}
					break;
			case 2: cout << "You selected option 2" << endl;
					cout << "Enter a digit or a letter" << endl;
					input = cin.get();
					if((input >= '0' && input <= '9'))
						cout << "You entered a digit" << endl;
					break;
			case 3: cout << "You selected option 3" << endl;
					break;
			case 4: cout << "You selected option 4" << endl;
					break;
			case 5: cout << "You selected option 5" << endl;
					break;
			default: cout << "Invalid option idiot - " << endl;
					break;
		}
		system("pause");
	}while(option != 5);
	return 0; //C++ return code
}
// C++ function declaration goes below this line.
void menu()
{
	cout << "Payroll Processing Menu" << endl;
	cout << "1. Enter Employee Data" << endl;
	cout << "2. Calculate Weekly Time " << endl;
	cout << "3. Print Checks" << endl;
	cout << "4. Print Payroll Reports" << endl; 
	cout << "5. Exit." << endl; 
}
