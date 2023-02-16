/*
Henry Lewis
Title: Guessing Game 5
Due: 3/30/2022
Description: Make the program repeatable.
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
	int score; // Max score for the user
	char charPlay = 'y'; //Set value for loop to repeat
	int totalScore = 0; // Cumulative game score
	int totalGames = 0; // How many games have been played
	double averageScore; // Average game score

	while ( charPlay == 'y' )
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

	}

	cout << "Total games played: " << totalGames << endl;
	cout << "Total score: " << totalScore << endl;
	averageScore = (double)totalScore / totalGames;
	cout << "Average score: " << averageScore << endl;

	cout << endl;
	return 0;
}

// Problems: I pasted the while loop informationin before making the brackets and had to individually indent everything out.