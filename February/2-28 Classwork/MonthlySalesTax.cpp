
#include <iostream>
#include <cmath>
#include <ctime>
/*14. Monthly Sales Tax
A retail company must file a monthly sales tax report listing the sales for the month and
the amount of sales tax collected. Write a program that asks for the month, the year,
and the total amount collected at the cash register (that is, sales plus sales tax). Assume
the state sales tax is 4 percent and the county sales tax is 2 percent.
If the total amount collected is known and the total sales tax is 6 percent, the amount
of product sales may be calculated as:
S 
T
1.06
S is the product sales and T is the total income (product sales plus sales tax).
The program should display a report similar to
Month: October
 --------------------
Total Collected: $ 26572.89
Sales: $ 25068.76
County Sales Tax: $ 501.38
State Sales Tax: $ 1002.75
Total Sales Tax: $ 1504.13 



monthSale, total, countyTax, stateTax, countyPercent, statePercent


*/
using namespace std;
int main()
{
	double monthSale, total, countyTax, stateTax, totalTax, countyPercent=0.02 , statePercent=0.04;
	string month, year;
	//Find the data
	cout << "What month is it? ";
	cin >> month;
	cout << endl << "What year is it? ";
	cin >> year;
	cout << endl << "How much money was collected at the register this month? ";
	cin >> total;
	monthSale = total/1.06;
	stateTax = monthSale*statePercent;
	countyTax = monthSale*countyPercent;
	totalTax = countyTax + stateTax;
	
	//Output the Data to the user
	
	cout << "Month: " << month << endl;
	cout << "___________________________ \n";
	cout << "Total Collected: " << total << endl;
	cout << "Sales: " << monthSale << endl;
	cout << "County Sales Tax: " << countyTax << endl;
	cout << "State Sales Tax: " << stateTax << endl;
	cout << "Total Sales Tax: " << totalTax;
	
}
