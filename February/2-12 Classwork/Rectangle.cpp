// CIS 251 Section 300
//Instructor: Mark Whigham
//Programmer Name: Ahmed Ansari
//Project Description: Task 1-4
//Operating System: Windows 10
//IDE: Dev-C++
//Date Assigned 1-15-2019
//Date Due: 1-15-2019

#include<iostream> //Header file that contains the cin, cout, and endl functions
#include<cmath>
#include<ctime>
#include <iomanip>
#include<string> //Header file that contains the C++ string functions

using namespace std; //Points to the C++ library 
//C++ functions prototype goes below this line alone with global constant and variable declarations
int main() //c++ main function.
{
	//This is the basic structure of a C++ program.
	//declare local variables and constants
	double area, length, width, perimeter;
	//Convert the algorithm to C++ code statements below this line
	cout << "What is the length and width of your rectangle?" << endl << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	
	area = length*width;
	perimeter = 2*length + 2*width;
	
	printf("\n%-15s%-8s%-8s\n", "Perimeter", "Length", "Width");
	cout << setw(15) << left << perimeter << setw(8) << length  << setw(8) << width << "\n \n";
	
	printf("%-15s%-8s%-8s\n", "Area", "Length", "Width");
	cout << setw(15) << left << area << setw(8) << length  << setw(8) << width << "\n \n"
		 << "Designed by: Ahmed Ansari \n" << "Prepared for: Mark Whigam CIS 251 \n" << "Date: 2/13/2019";
		
 	return 0; //C++ return code
}
// C++ function declaration goes below this line.
