//Write a program that will calculate the square root of any number. Prompt the user for the number. 
//Display the number read in and the square root of the number. Name the function mysquarert.
//squareroot = pow(number, 0.5);
#include<iostream>
#include<cmath>
#include<math.h>       /* sqrt */

using namespace std;
double mySquareRt(double yourNum);
int main ()
{
		double yourNum = 0, squareRt;
		cout << "What number do you want to find the square root of?" << endl;
		cin >> yourNum;
		squareRt = mySquareRt(yourNum); 
		cout << "Your Square Root is " << squareRt; 
}

double mySquareRt(double yourNum)
{
	double squareRt = pow(yourNum, 0.5);
	return squareRt;
}
