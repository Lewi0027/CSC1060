/*
Henry Lewis
Title: Guessing Game 6
Due: 4/1/2022
Description: Make the range adjustable by user.
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
	int low; // Low range value
	int high; // High range value
	int score; // Max score for the user
	char charPlay; //Set value for loop to repeat
	int totalScore = 0; // Cumulative game score
	int totalGames = 0; // How many games have been played
	double averageScore; // Average game score

	cout << "You get to choose the range!" << endl << "What would you like the lowest possible value to be?" << endl;
	cin >> low;
	cout << "What would you like the highest possible value to be?" << endl;
	cin >> high;
	while ( low >= high )
	{
		cout << "That range is invalid! The lowest value must be smaller than the highest value." << endl << "What would you like the lowest possible value to be?" << endl;
		cin >> low;
		cout << "What would you like the highest possible value to be?" << endl;
		cin >> high;
	}
	do
	{
		score = 5;
	

		randNum = rand( ) % (high - low + 1) + low;
		cout << "The random number is: " << randNum << endl; // This line exists for testing purposes

		cout << "Guess a number between " << low << " and " << high << ": ";
		cin >> userNum;

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
			score--;

		}

		cout << "Randomly generated number is: " << randNum << endl;
		cout << "Your guess was: " << userNum << endl;
		if ( score < 0 )
		{
			score = 0;
		}
		else { ; }

		totalScore = totalScore + score;
		totalGames++;

		cout << "Your score is: " << score << endl;
		cout << "Would you like to play again (y/n)?" << endl;
		cin >> charPlay;
		charPlay = tolower (charPlay);

	} while ( charPlay == 'y' );

	cout << "Total games played: " << totalGames << endl;
	cout << "Total score: " << totalScore << endl;
	averageScore = (double)totalScore / totalGames;
	cout << "Average score: " << averageScore << endl;

	cout << endl;
	return 0;
}

// Problems: No problems incurred.