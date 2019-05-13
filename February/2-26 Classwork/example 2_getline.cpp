// using the getline function
// The following example specifies a terminating character for the input stream
//Name: Ahmed Ansari
//Instructor: Mark Whighanm
//Class: CIS 251-300
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	ofstream outFile;
    char name[13], compName[25], idNum[6], strtNum[6], address[45], city[11], state[3], zip[6];
    
    cout << "Enter your name - enter an * to terminate input" << endl;
	cin.getline( name, 20, '*' );
	cout << "Enter your Company Name - enter an * to terminate input" << endl;
	cin.getline( compName, 25, '*' );
	cout << "Enter your ID number (4 digits) - enter an * to terminate input" << endl;
	cin.getline( idNum, 6, '*' );
	cout << "Enter your Street Number - enter an * to terminate input" << endl;
	cin.getline( strtNum, 6, '*' );
	cout << "Enter your Street Name- enter an * to terminate input" << endl;
	cin.getline( address, 45, '*' );
	cout << "Enter your City - enter an * to terminate input" << endl;
	cin.getline( city, 20, '*' );
	cout << "Enter your State - enter an * to terminate input" << endl;
	cin.getline( state, 4, '*' );
	cout << "Enter your ZIP Code - enter an * to terminate input" << endl;
	cin.getline( zip, 7, '*' );
	outFile.open("G:\\info.txt");
	string n(name), c(compName), i(idNum), s(strtNum), a(address), ci(city), st(state), z(zip);
	outFile << n << c << i << s << a << ci << st << z << endl;
	cout << "Data Written to file: " << endl << "Name: " << n << endl << "Company: " << c << endl << "ID#: " << i << endl 
		 << "Street Number: " << s << endl << "Street: " << a << endl << "City: " << ci << endl << "State: " << st << endl <<"Zip: " << zip << endl;
	

	return 0;
}
