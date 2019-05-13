//Write a program that will simulate the payroll process. 
//Prompt the user for the employee id, full name, hours worked, pay rate. 
//Calculate the employee's gross pay, net pay and appropriate deductions. 
//Your output should be in the appropriate types and formats.

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>

void input();
void calculate(double, double);
void output();
using namespace std;

string firstName, lastName, empID, employer = "Calhoun";
double ot, otHours, otRate, netPay, deductions, grossPay;
int checknum;
const double fedRate = 0.01, stateRate = 0.02;

int main()
{
	input();
	output();
	
	return 0;
}
void input()
{
	cout << " Entering input module" << endl;
	system("pause");

	double hours, payRate;
	cout << "Enter hours worked" << endl;
	cin >> hours;
	cout << "Enter pay rate" << endl;
	cin >> payRate;
	cout << "Enter Employee Id" << endl;
	cin >> empID;
	cout << "Enter First name" << endl;
	cin >> firstName;
	cout << "Enter last name" << endl;
	cin >> lastName;
	calculate(hours, payRate);
}
void calculate(double hours, double payRate)
{
	cout << " Entering calculate module" << endl;
	system("pause");
	
	if(hours > 40) {
		cout << " calculate OT" << endl;
	}
	else {
			grossPay = hours * payRate;
	}
	
	double fedTax, stateTax;
	fedTax = grossPay * fedRate;
	stateTax = grossPay * stateRate;
	deductions = stateTax + fedTax;
	netPay = grossPay - deductions;
}
void output()
{
	cout << " Entering output module" << endl;
	cout << "Gross: " << grossPay << endl;
	cout << "Net: " << netPay << endl;
		system("pause");
}
