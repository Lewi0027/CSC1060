/*
Henry Lewis
Title: Array Find Smallest CS
Due: 4/22/22
Description: Using arrays to find the samllest number
*/

#include <iostream> // Library for input/output
#include <cstdlib> //
#include <ctime> // Library for time for rand functions
#include <iomanip> //
using namespace std; // Standard collection of names

const int MAX = 100; // This is a constant value
void fillArray(int numArray[MAX]); // Fills array with a random number from 0-499
void printArray(int numArray[MAX]); // Function to print the array
int findSmallest( int numArray[MAX] ); // Function to find smallest value

int main( ) // Main part of program
{
	srand( time( 0 ) );

	int numArray[MAX]; // Array with values between 0-499
	int smallIndex; // Holds smallest value

	fillArray(numArray);
	printArray(numArray);
	smallIndex = findSmallest(numArray);

	cout << "The index with the smallest value is " << smallIndex << endl;
	cout << "The smallest value is: " << numArray[smallIndex] << endl;

	cout << endl;
	return 0;
}

/******************************
	Name: fillArray
	Description: Fills array with a random number from 0-499
	param: numArray[] - Array to be populated with values
	return: none
******************************/
void fillArray(int numArray[MAX] )
{
	for ( int i = 0; i < MAX; i++ )
	{
		numArray[i] = rand( ) % 500;
	}
} // End fillArray

/******************************
	Name: printArray
	Description: Prints array values
	param: numArray[] - Array values to be printed
	return: none
******************************/
void printArray(int numArray[MAX])
{
	for ( int i = 0; i < MAX; i++ )
	{
		cout << setw( 5 ) << numArray[i];
		
		if ( i % 10 == 9 )
		{
			cout << endl;
		}
		else { ; }
	}
	cout << endl;
} // End printArray

/******************************
	Name: findSmallest
	Description: Finds smallest value from array
	param: numArray[] - Array values to be sorted through
	return: hold - smallest value
******************************/
int findSmallest( int numArray[MAX] )
{
	int hold = 0; // Smallest value index spot
	
	for ( int i = 0; i < MAX; i++ )
	{
		if ( numArray[i] < numArray[hold] )
		{
			hold = i;
		}
		else { ; }
	}
	return hold;
} // End findSmallest

// Problems: None.