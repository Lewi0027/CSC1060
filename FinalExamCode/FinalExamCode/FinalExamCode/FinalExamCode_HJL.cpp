/*
Henry Lewis
Title: Final Exam Code
Date: 5/5/22
Parts: 1,2,3,4,5 & 7
*/

#include <iostream> // Library for input/output
using namespace std; // Standard collection of names

int const MAX = 30; // Max value for numbers gathered

void printArray( int sampleArray[MAX] ); // Function to print array values provided by user
void averageValue( int sampleArray[MAX] ); // Function to calculate average values of array
void lowestHighest( int sampleArray[MAX] ); // Function to find the lowest and highest values in the array

int main( ) // Main part of program
{
	int number; // Value provided by user
	int count = 0; // iteration of loop
	int sampleArray[MAX]; // Array for user values

	while ( count < MAX )
	{
		cout << "Please enter a number: " << endl;
		cin >> number;
		sampleArray[count] = number;
		count++;
	}

	printArray( sampleArray );
	averageValue( sampleArray );
	lowestHighest( sampleArray );

	cout << endl;
	return 0;
}

void printArray( int sampleArray[MAX] )
{
	for ( int i = 0; i < MAX; i++ )
	{
		cout << sampleArray[i] << " ";
	}
	cout << endl;
}

void averageValue( int sampleArray[MAX] )
{
	double avgSum = 0; // Variable that will hold sum of values to find average of
	double avg; // Variable that will hold average value of array

	for ( int i = 0; i < MAX; i++ )
	{
		avgSum = avgSum + sampleArray[i];
	}
	
	avg = avgSum / MAX;
	cout << "The average value is: " << avg << endl;
}

void lowestHighest( int sampleArray[MAX] )
{
	int lowest = sampleArray[0]; // Variable to place lowest array value
	int lowestPlace; // Spot in array where lowest value occurs
	int highest = sampleArray[0]; // Variable to place highest array value
	int highestPlace; // Spot in array where highest value occurs


	for ( int i = 1; i < MAX; i++ )
	{
		if ( sampleArray[i] < lowest )
		{
			lowestPlace = i;
			lowest = sampleArray[lowestPlace];
		}
		else { ; }
	}

	cout << "Lowest value is: " << lowest << endl;

	for ( int j = 1; j < MAX; j++ )
	{
		if ( sampleArray[j] > highest )
		{
			highestPlace = j;
			highest = sampleArray[highestPlace];
		}
		else { ; }
	}

	cout << "Highest value is : "<< highest << endl;
}