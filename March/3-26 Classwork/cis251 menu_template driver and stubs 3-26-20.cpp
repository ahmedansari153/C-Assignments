// build kiosk template
#include<iostream>
#include<cmath>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
void payrollMenu();
void geometryMenu();
void loanMenu();
void loanApplication();
void rectangle();
void square();
void triangle();
double ranNumGen(double);
int ranNumGen(int);
//default value will be I for integer.
bool dataEval(char answer = 'I');
void report(bool arrLoc[], int size);

int main ()
{
	//1. Payroll Process System
	//2. Geometry Calculations
	//3. Loan Processing System
	//4. Exit
	//Design a Program that will display the above list of options.
	int option;
	do
	{// begin do while
		system("cls");
		
		cout<<" Main Menu"<<endl;
		cout<<" 1. Payroll Process System"<<endl;
		cout<<" 2. Geometry Calculations"<<endl;
		cout<<" 3. Loan Processing System"<<endl;
		cout<<" 4. Exit"<<endl;
		cout<<" Please enter one of the option above"<<endl;
		cin>>option;
		system("cls");
		switch(option)
		{ // begin switch
					case 1: payrollMenu();
								break;
					case 2: geometryMenu();
								break;
					case 3: loanMenu();
								break;
					case 4: cout<<"Exiting Application. Press Enter to Close"<<endl;
								break;
					default: cout<<" wrong option entered"<<endl;
								break;
		}// end switch
		system("pause");
	}while (option!=4); // end do while
	return 0;
}// end main
/*


BEGIN PAYROLL PROCESSING SEGMENT


*/
void payrollMenu() {
	//Option 1
	//User to select a list of payroll processing options:
	//1. Employee information
	//2. Calculate Payroll
	//3. Print Reports
	//	A. Print Check
	//	B. Print Check Stub
	//	C. Other (optional)
	//  D. Exit

	int option, option2;
	do {
		cout<<" Payroll Selection"<<endl;
		cout<<" 1. Employee information"<<endl;
		cout<<" 2. Calculate Payroll"<<endl;
		cout<<" 3. Loan Processing System"<<endl;
		cout<<" 4. Exit"<<endl;
		cout<<" Please enter one of the option above"<<endl;
		cin>>option;
		system("cls");
		switch(option)
		{ // begin switch
					case 1: cout<<"Employee information selected"<<endl;
								break;
					case 2: cout<<"Calculate Payroll Selected"<<endl;
								break;
					case 3: do
							{
								cout<<"Print Reports"<<endl;
								cout<<"1. Print Check"<<endl;
								cout<<"2. Print Check Stub"<<endl;
								cout<<"3. Other (optional)"<<endl;
								cout<<"4. Go back"<<endl;
								cin >> option2;
								system("cls");
								switch(option2)
								{
									case 1: cout<<"Print Check Selected"<<endl<<endl;
												break;
									case 2: cout<<"Print Check Stub Selected"<<endl<<endl;
												break;
									case 3: cout<<"Other Selected"<<endl<<endl;
												break;
									case 4: cout<<"Go back"<<endl;
												break;
									default: cout<<" wrong option entered"<<endl;
										break;
								}
							} while(option2 !=4);
								break;
					case 4: cout<<"Going back to previous menu."<<endl;
								break;
					default: cout<<" wrong option entered"<<endl;
								break;
		}// end switch
	}while (option!=4); // end do while
}
/*


BEGIN GEOMETRY PROCESSING SEGMENT


*/
void geometryMenu() {
	//Option 2
	//Practice certain geometry problems.
	//1. Working with Rectangles (Or your choice)
	//2. Working with Circles (Or your choice)
	//3. Other(optional)
	//Add any of the functions concepts to your program in addition to the ones below.
	//Add function overloading to the functions
	//Add default arguments to the functions
	//Add the exit function to this option that will exit the geometry option due to any unpredictable action(s).
	//You will need to create a file that will keep track of the user’s performance. 
	//The fields in the input file are the user’s id, first name, last name. 
	//The output file should have the following fields: The user’s id, first name, last name, problems practiced 
	//(i.e. area of a rectangle or triangle…), number of correct problems, number of incorrect problems and the users average for the problems. 
	//If the user scores an average less than 70%, display a message for them to review the concepts before trying again. 
	//The user must practice at least 10 problems (you may test with 2 until you get your program complete)
	int option;
	do {
		cout<<" Geometry Problems"<<endl;
		cout<<" 1. Working With Rectangles"<<endl;
		cout<<" 2. Working With Squares"<<endl;
		cout<<" 3. Working With Triangles"<<endl;
		cout<<" 4. Go Back"<<endl;
		cout<<" Please enter one of the option above"<<endl;
		cin>>option;
		system("cls");
		switch(option)
		{ // begin switch
			case 1: rectangle();
						break;
			case 2: square();
						break;
			case 3: triangle();
						break;
			case 4: cout<<"Going back to the previous menu"<< endl;
						break;
			default: cout<<" wrong option entered"<<endl;
								break;			
		}
	}while(option!= 4);
}
void square() {
	string userId, firstName, lastName;
	char answer;
	int size = 9;
	cout<<"Do you want to work with integers or decimals? (I/D Optional) "<<endl;
	cin>>answer;
	bool intOrDec = dataEval(answer); //If true use int, if false use float
	if (intOrDec == true) //Integer version
	{
		int solutions[size], answers[size];
		bool results[size];
		for(int i=0; i<=size; i++)
		{
			int ranNum, solution, answer;
    		ranNum=ranNumGen(10);
    		solution=ranNum*ranNum;
    		cout << "Find the area of a square if the length is: " << ranNum <<endl;
    		cin >> answer;
    		solutions[i] = solution;
    		answers[i] = answer;
    		if(solutions[i] == answers[i]) {
    			results[i] = true;
			}
			else {
				results[i] = false;
			}
		}
		report(results, size);
	}
	else //Float version
	{
		double solutions[size], answers[size];
		bool results[size];
		for(int i=0; i<=size; i++)
		{
			double ranNum, solution, answer;
			double scale = 0.01;
    		ranNum=ranNumGen(10.2);
    		//Round the randum number
    		ranNum = floor(ranNum / scale + 0.5) * scale;
    		solution=ranNum*ranNum;
    		//Round the solution
    		solution = floor(solution / scale + 0.5) * scale;
    		cout << "Find the area of a square if the length is: " << ranNum << ". Round to two decimal places" <<endl;
    		cin >> answer;
    		solutions[i] = solution;
    		answers[i] = answer;
    		if(solutions[i] == answers[i]) {
    			results[i] = true;
			}
			else {
				results[i] = false;
			}
		}
		
		report(results, size);
	}
	
}
void triangle() {
	
}

void rectangle() {
	
}
void report(bool arrLoc[], int size) {
	int numRight;
	for(int i=0; i<=size; i++) 
	{
		if(arrLoc[i]==true) 
		{
			numRight++;
		}
	}
	cout << "You got " << numRight << " right." << endl;
	cout << "You got " << 10-numRight << " wrong." << endl;
	if(numRight<7) {
		cout << "Review the concepts before trying the test again." <<endl;
	}
	system("pause");
	system("cls");
}
bool dataEval(char answer) 
{
	if(answer=='I')
	{
		return true;
	}
	else if(answer =='D')
	{
		return false;
	}
}
//Generate random number depending on data type using overloading
int ranNumGen(int n) 
{
	srand(time(NULL));
    return rand()%((n-5)+1)+5;
}

double ranNumGen(double n) 
{
	srand(time(NULL));
    return (float)rand()/(float)(RAND_MAX/n);;
}
/*


BEGIN LOAN PROCESSING SEGMENT


*/

void loanMenu() {
	//Option 3
	//1. Loan application
	//2. Loan Status
	//3. Exit
	int option;
	do {
		cout<<" Loan Information"<<endl;
		cout<<" 1. Loan Application"<<endl;
		cout<<" 2. Loan Status"<<endl;
		cout<<" 3. Go Back"<<endl;
		cout<<" Please enter one of the option above"<<endl;
		cin>>option;
		system("cls");
		switch(option)
		{ // begin switch
			case 1: loanApplication();
						break;
			case 2: cout<<"Loan Status Selected"<<endl<<endl;
						break;
			case 3: cout<<"Going back to previous menu."<< endl;
						break;
			default: cout<<" wrong option entered"<<endl;
								break;			
		}
	}while(option!= 3);
}

void loanApplication()
{
	//Range 43% of debt to income ratio.
	//Credit Score: Should be greater than 580. Random Generator
	//Annual Salary: Should be greater than $35,000.
	//On The Job: 2 years
	//Current Resident: Madison, AL
	//Pay Stub Copy. Should include Federal income tax, state income tax, gross pay, net pay, 
	//First Name, Middle Initial, Last Name, Address, City, State, County, Zip Code
	
	//Use for loop to have multiple customers. Customer number is 5. Use do while, and while as well somewhere.
	srand (time(NULL));
	const int minJobLngth = 2, creditScore = rand()%((800 - 200) + 1) + 200;
	cout << creditScore << endl;
	const double minSal = 35000;
	const string reqCity = "madison", reqState = "AL";
	string firstName, midInit, lastName, address, city, state, county, zip;
	int salary, jobLngth;
	
	cout << "What is your first name" << endl;
	cin >> firstName;
	cin.ignore();
	cout << "What is your middle initial (optional)" << endl;
	getline(cin, midInit);
	cout << "What is your last name" << endl;
	getline(cin, lastName);
	cout << "What is your address (Do not include city, state, county, or zip)" << endl;
	getline(cin, address);
	cout << "What city do you live in?" << endl;
	getline(cin, city);
	cout << "What state do you live in" << endl;
	getline(cin, state);
	cout << "What county do you live in" << endl;
	getline(cin, county);
	cout << "What is your zip code" << endl;
	getline(cin, zip);
	cout << "What is your salary?" << endl;
	cin >> salary;
}
