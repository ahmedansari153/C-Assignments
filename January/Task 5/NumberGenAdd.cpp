// This program simulates rolling dice.
#include <iostream>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
using namespace std;
int addition(int, int); //function to add two numbers together
int main()
{
   // Constants
   const int MIN_VALUE = 1;   // Minimum die value
   const int MAX_VALUE = 99;   // Maximum die value

   // Variables
   int num1;   // To hold the value of die #1
   int num2, sum;   // To hold the value of die #2

   // Get the system time.
   unsigned seed = time(0);
   
   // Seed the random number generator.
   srand(seed);

   cout << "Generate two numbers...\n";
   num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
   num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
   sum = addition(num1, num2);
   cout << "Number 1 = " << num1 << endl << "Number 2 = " << num2 << endl;
   cout << "Added numbers = " <<sum <<endl;
   return 0;
}

int addition(int num1, int num2) {
    return num1 + num2;
}