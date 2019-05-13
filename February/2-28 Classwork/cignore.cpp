#include <iostream>
#include <string>
using namespace std;
int main() 
{
	/* 
		cin.ignore(n,c)
		n is an integer
		c is a character
		The logic - skip n number of characters, or until the character c is encountered.
	 */
	int number;
	char line[100];
	string fullName;
	cout << "Type a line terminated by 'enter'" << endl;
	cin.getline(line, 100, '\n');
	cout << line;
	cout << " Please enter a full name ";
	cin >> fullName; 
	character = cin.get();
	cout << character;
	cin.ignore(100, '\n');
	cout << "Please enter a number " << endl;
	cin >> number;
	cout << "The number entere was " << number << endl;
}
