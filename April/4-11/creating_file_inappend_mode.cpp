// This program writes user input to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream outputFile;		// File stream object
   int numberOfRecords;     // Number of records to enter
   double sampleData;       // sampleData amount for a day
   
   // Get the number of records.
   cout << "For how many records do you have sampleData? ";
   cin >>numberOfRecords;

   // Open a file named sampleData.txt.
   outputFile.open("sampleData.txt",ios::app);

   // Get the sampleData for each day and write it
   // to the file.
   for (int count = 1; count <= numberOfRecords; count++)
   {
      // Get the amount for a day.
      cout << "Enter the sample data for day "
           << count << ": ";
      cin >> sampleData;
      
      // Write the sales to the file.
      outputFile << sampleData << endl;
   }

   // Close the file.
   outputFile.close();
   cout << "Data written to sampleData.txt\n";
   return 0;
}