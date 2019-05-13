/*
	Ahmed Ansari
	Mark Whigam CIS251
	Date: 4-4-19
	
	Write a program that will create a function to find the area of a rectange. Validate
	Use overloading for calculating real and integer values
*/
#include<iostream>
#include<cmath>
#include<cstdlib> //contains the exit function

using namespace std;

int findArea(int, int);
double findArea(double, double);
void sample(int = 5, int =7);

int main()
{
	int length, width, area;
	double dlength, dwidth, darea;
	
	cout << "Enter length " << endl;
	cin >> length;
	cout << "Enter Width " << endl;
	cin >> width;
	area = findArea(length, width);
	
	cout << "Enter double length " << endl;
	cin >> dlength;
	cout << "Enter double Width " << endl;
	cin >> dwidth;
	darea = findArea(dlength, dwidth);
	
	cout << "The int area is " << area << endl;
	cout << "The double area is " << darea << endl;
	sample();
	return 0;
}

int findArea(int length, int width)
{
	return length * width;
}
double findArea(double dlength, double dwidth)
{
	return dlength*dwidth;
}
void sample(int number1, int number2)
{
	cout << endl << number1 << endl;
	cout << number2 << endl;
}
