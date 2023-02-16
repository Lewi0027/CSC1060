/*
Henry Lewis
Title: Guessing Game 1
Due: 3/11/2022
Description: First part of my first project in c++
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

	cout << "Randomly generated number is: " << randNum << endl;
	cout << "Your guess was: " << userNum << endl;

	cout << endl; // Outputs a new line
	return 0; // Program finished succesfully
}

// Problems: I used variable names that were not descriptive enough at first. 