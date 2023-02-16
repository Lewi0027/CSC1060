/*
Henry Lewis
Title: Guessing Game 3
Due: 3/25/2022
Description: For this program the user must correctly guess the number to end the program.
*/

#include <iostream> // Library for input/output
#include <cstdlib> // Library for rand & srand
#include <ctime> // Library for time
using namespace std; // Standard collection of names

int main( ) // Main part of program
{
	srand(time(0));
	int randNum; // Computer's random number
	int userNum; // User guess
	int low = 10; // Low range value
	int high = 20; // High range value

	cout << "Guess a number between " << low << " and " << high << ": ";
	cin >> userNum;

	randNum = rand( ) % (high - low + 1) + low;
	cout << "The random number is: " << randNum << endl;

	while ( randNum != userNum )
	{
		if ( randNum > userNum )
		{
			cout << "Your guess was too low." << endl;
		}
		else
		{
			cout << "Your guess was too high." << endl;
		}

		cout << "Please make another guess." << endl;
		cin >> userNum;

	}

	cout << "Randomly generated number is: " << randNum << endl;
	cout << "Your guess was: " << userNum << endl;

	cout << endl;
	return 0;
}

// Problems: I did not have any problems making this.