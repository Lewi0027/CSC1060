/*
Henry Lewis
Title: Do While Loop Checksheet
Due: 3/25/2022
Description: Creating our first program that uses a do while loop.
*/

#include <iostream> // Library for input/output
using namespace std; // Standard collection of names

int main( ) // Main part of program
{
	int numLoop1; // Declaring numLoop1
	int numLoop2; // Declaring numLoop2
	int numLoop3; // Declaring numLoop3

	cout << "-------- LOOP 1 --------" << endl;
	do
	{
		cout << "Give a number greater or equal to 50." << endl;
		cin >> numLoop1;
	} while ( numLoop1 < 50 );

	cout << "Your value of " << numLoop1 << " is valid." << endl;

	cout << "\n\n-------- LOOP 2 --------" << endl;
	do
	{
		cout << "Give a number between 50 and 100 (inclusive)." << endl;
		cin >> numLoop2;
	} while ( numLoop2 < 50 || numLoop2 > 100 );

	cout << "Your value of " << numLoop2 << " is valid." << endl;

	cout << "\n\n-------- LOOP 3 --------" << endl;
	cout << "Give a number between 50 and 100 (inclusive)" << endl;
	cin >> numLoop3;

	while ( numLoop3 < 50 || numLoop3 > 100 )
	{
		cout << "Give a number between 50 and 100 (inclusive)." << endl;
		cin >> numLoop3; 
	}

	cout << "Your value of " << numLoop3 << " is valid." << endl;

	cout << "\n\n--------LOOP 4 --------" << endl;
	int numLoop4; // Declaring numLoop4
	int sum = 0; // Declaring a sum to pool values

	do
	{
		cout << "Give positive values, 0 value stops program." << endl;
		cin >> numLoop4;
		sum = sum + numLoop4;

	} while ( numLoop4 != 0 );

	cout << "The sum of those numbers is: " << sum << endl;


	cout << endl;
	return 0;
}

// Problems: I forgot to initialize sum.
// Problem 5: The disadvantage to this method is that you have to initialize the variable before the loops begins, requiring more lines