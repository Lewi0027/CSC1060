/*
Henry Lewis
Title: Functions Basics CS
Due: 4/8/2022
Description: First program that uses functions
*/

#include <iostream> //Library for input/output
using namespace std; //Standard collection of names

double calcArea(double sideLength); //Calculate area of square
void printDone(); //Output the word "Done"

int main()
{
	double result1; //First result
	double result2; //Second result
	double length = 10; //Side length of square

	result1 = calcArea(2); //Answer is 4
	result2 = calcArea(length); //Answer is 100

	cout << "An area with side length of 2 is: " << result1 << endl;
	cout << "An area with side length of 10 is: " << result2 << endl;

	printDone();

	cout << endl;
	return 0;
}

/************************************************************
	Function: Calculate square area
	Description: The purpose of this function is to calculate the area.
	parameter: sideLength - side length of square
	return: rvArea - the area of the square
	********************************************************/
double calcArea(double sideLength)
{
	double rvArea; // Area variable (length squared)
	rvArea = sideLength * sideLength;
	return rvArea;
} //end calcArea

/************************************************************
	Function: Print Done
	Description: The purpose of this function is to print "Done".
	parameter: none
	return: void
	********************************************************/
void printDone()
{
	cout << "Done";
} //end printDone

// Problems: I messed indentations up when copy-pasting and that took a second to identify.