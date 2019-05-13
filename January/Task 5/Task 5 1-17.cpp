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
void menu();
int main() //c++ main function.
{
	//This is the basic structure of a C++ program.
	//declare local variables and constants
	int option;
	
	//Convert the algorithm to C++ code statements below this line
	do {
		menu();
		cout << "Please enter an option (From 1-5)" << endl;
		cin >> option;
		switch(option) {
			case 1: cout << "Option 1 Selected" << endl;
				break;
			case 2: cout << "Option 2 Selected" << endl;
				break;
			case 3: cout << "Option 3 Selected" << endl;
				break;
			case 4: cout << "Option 4 Selected" << endl;
				break;
			case 5: cout << "Option 5 Selected" << endl;
				break;
		}
		system("PAUSE");
		system("CLS");
	}while(option != 5);
	return 0; //C++ return code
}
// C++ function declaration goes below this line.

void menu() {
	cout << "1. Practice Addition" << endl;
	cout << "2. Practice Subtraction" << endl;
	cout << "3. Practice Multiplication" << endl;
	cout << "4. Practice Addition" << endl;
	cout << "5. Exit" << endl;
}
