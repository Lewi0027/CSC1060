/*
Henry Lewis
Title: Array Basics Checksheet
Due: 4/19/2022
Description: This program will be our first time working with arrays.
*/

#include <iostream> // Library for input/output
using namespace std; // Standard collection of names

const int MAX = 4; // Size of the array

void getScores(double scoreArray[MAX]);
double calcAverage(double scoreArray[MAX]);

int main( ) // Main part of program
{
	double scoreArray[MAX]; // Array for test scores
	double average; // variable for calculating averages
	
	getScores(scoreArray);
	average = calcAverage( scoreArray );
	cout << "Average is: " << average;

	cout << endl;
	return 0;
} // End main

/******************************
	Function: calcAverage
	Description: Find average of test scores
	param: scoreArray[] - test scores
	return: average - average of test scores
*******************************/
double calcAverage( double scoreArray[MAX] )
{
	double total = 0; // Accumulator
	double average; // Value for calculating average

	for ( int i = 0; i < MAX; i++ )
	{
		total = total + scoreArray[i];
	}
	average = total / MAX;
	return average;

} // End calcAverage

/******************************
	Function: getScores
	Description: Read test scores
	param: scoreArray[] - test scores
	return: void
*******************************/
void getScores(double scoreArray[MAX])
{
		
	for ( int i = 0; i < MAX; i++ )
	{
		double score; // Score value
		
		cout << "Enter score: ";
		cin >> scoreArray[i];

	}
} // End getScores

// Problems: No problems.