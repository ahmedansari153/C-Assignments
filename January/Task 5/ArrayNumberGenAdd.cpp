// This program simulates rolling dice.
#include <iostream>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
using namespace std;

int findSum(int, int);
int findProduct(int, int);
int findQuotient(int, int);
int findDifference(int, int);

int main()
{
   // Constants
   const int MIN_VALUE = 10;   // Minimum die value
   const int MAX_VALUE = 99;   // Maximum die value

   // Variables
   int numArray1[10], numArray2[10], sumArray[10], productArray[10], quotientArray[10], differenceArray[10]; //declaring the arrays
   
   // Get the system time.
   unsigned seed = time(0);
   
   // Seed the random number generator.
   srand(seed);
      cout << "Adding elements to the array two numbers...\n";

   for(int i = 0; i <= 9; i++) {
   		numArray1[i] = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
   		numArray2[i] = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
   		sumArray[i] = findSum(numArray1[i], numArray2[i]);
   		productArray[i] = findProduct(numArray1[i], numArray2[i]);
   		quotientArray[i] = findQuotient(numArray1[i], numArray2[i]);
   		differenceArray[i] = findDifference(numArray1[i], numArray2[i]);
   		
   		cout << "[Value of Array1: " << numArray1[i] << "] [Value of array2: " << numArray2[i] << "]" << endl 
		   	<< "	[Sum of those two numbers: " << sumArray[i] << "]" << endl
		   	<< "	[Product of those two numbers: " << productArray[i] << "]" << endl
		   	<< "	[Quotient of those two numbers: " << quotientArray[i] << "]" << endl
		   	<< "	[Difference of those two numbers: " << differenceArray[i] << "]" << endl;
   }
   
   return 0;
}

int findSum(int num1, int num2) {
    return num1 + num2;
}

int findProduct(int num1, int num2) {
    return num1 * num2;
}

int findQuotient(int num1, int num2) {
    return num1 / num2;
}

int findDifference(int num1, int num2) {
    return num1 - num2;
}
