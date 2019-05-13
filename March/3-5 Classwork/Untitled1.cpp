#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
	/* syntax for the if statements used
	
		nested if statement
			if(condition)
				if(condition)
					statement;
			if else if
				if(expression_1)
				{
					statement1;
					statement2;
				}
				else if (expression_2)
				{
					statement1;
					statement2;
				}
				insert as many else if as you need
				else
				{
					statement;
				{
	*/
	//declare variables and constants
	const double maxDebtRatio = 0.08
	bool loan_status;
	int credScore;
	double income, empLength, dbtIncomeRatio, monthDebtRatio, grossMonthIncome, loanAmount, residentDuration, annualIncome;
	string county, name, fname, lname, ssn;
	
	cout << "Please enter your first name" << endl;
	cin >> fname;
	cout << "Please enter your last name" << endl;
	cin >> lname;
	cout << "Please enter your county" << endl;
	cin >> county;
	cout << "How long have you lived at your current resident " << endl;
	cin >> residentDuration;
	cout << "How long have you worked with your current employer " << endl;
	cin >> empLength;
	cout << "Please enter credit score" << endl;
	cin >> credScore;
	cout << "Please enter your monthly income" << endl;
	cin >> grossMonthIncome
	cout << "Please enter your annual income" << endl;
	cin >> annualIncome
	cout << "What is your loan amount " << endl;
	cin >> loanAmount;
	cout << "Please enter your social security number" << endl;
	cin >> ssn;
	
	dbtIncomeRatio = grossMonthincome / monthDebtRatio;
}
