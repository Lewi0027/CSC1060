/*
Henry Lewis
Title: Array Sort CS
Due: 5/3/22
Description: Rearrange an array using various methods.
*/

#include <iostream> // Library for input/output
#include <cstdlib> //
#include <ctime> // Library for time for rand functions
#include <iomanip> //
using namespace std; // Standard collection of names

const int MAX = 100; // This is a constant value
void fillArray(int myArray[MAX]); // Fills array with a random number from 0-499
void printArray(int myArray[MAX]); // Function to print the array
int findSmallest( int myArray[MAX] ); // Function to find smallest value

void swap( int myArray[MAX], int index1, int index2 )
{
	int hold; // holds index value
	hold = myArray[index1];
	myArray[index1] = myArray[index2];
	myArray[index2] = hold;
}

void sortBubble( int myArray[MAX] )
{
	for ( int j = 0; j < MAX; j++ )
	{
		for ( int k = 0; k < MAX - 1 - j; k++ )
		{
			if ( myArray[k] > myArray[k + 1] )
			{
				swap( myArray, k, k + 1 );
			}
			else { ; }
		}
	}
}

void sortSelect( int myArray[MAX] )
{
	int lowest; // Index of the lowest element in the array
	
	for ( int j = 0; j < MAX - 1; j++ )
	{
		lowest = j;

		for ( int k = j; k < MAX; k++ )
		{
			if (myArray[lowest] > myArray[k])
			{
				lowest = k;
			}
			else { ; }
		}
		swap( myArray, j, lowest );
	}
}

int main( ) // Main part of program
{
	srand( time( 0 ) );

	int myArray[MAX]; // Array with values between 0-499
	int smallIndex; // Holds smallest value

	fillArray(myArray);
	printArray(myArray);
	smallIndex = findSmallest(myArray);

	cout << "The index with the smallest value is " << smallIndex << endl;
	cout << "The smallest value is: " << myArray[smallIndex] << endl;

	cout << "\nSwapped array: " << endl;
	swap( myArray, 0, 9 );
	swap( myArray, 20, 21 );
	swap( myArray, 97, 99 );
	printArray( myArray );

	cout << "\nSorted array: " << endl;
	//sortBubble(myArray);
	sortSelect( myArray );
	printArray(myArray);

	cout << endl;
	return 0;
}

/******************************
	Name: fillArray
	Description: Fills array with a random number from 0-499
	param: myArray[] - Array to be populated with values
	return: none
******************************/
void fillArray(int myArray[MAX] )
{
	for ( int i = 0; i < MAX; i++ )
	{
		myArray[i] = rand( ) % 500;
	}
} // End fillArray

/******************************
	Name: printArray
	Description: Prints array values
	param: myArray[] - Array values to be printed
	return: none
******************************/
void printArray(int myArray[MAX])
{
	for ( int i = 0; i < MAX; i++ )
	{
		cout << setw( 5 ) << myArray[i];
		
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
	param: myArray[] - Array values to be sorted through
	return: hold - smallest value
******************************/
int findSmallest( int myArray[MAX] )
{
	int hold = 0; // Smallest value index spot
	
	for ( int i = 0; i < MAX; i++ )
	{
		if ( myArray[i] < myArray[hold] )
		{
			hold = i;
		}
		else { ; }
	}
	return hold;
} // End findSmallest

// Problems: None.