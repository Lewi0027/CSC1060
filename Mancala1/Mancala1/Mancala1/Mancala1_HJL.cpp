/*
Henry Lewis
Title: Mancala 1
Due: 4/13/2022
Description: Creating star border for Mancala.
*/

#include <iostream> // Library for input/output
using namespace std; // Standard collection of names

const int Max = 14; // Max number of bins in beadArray
void printSolidLine(int numStars); // Ouput stars for edges of board

int main( )
{
	printSolidLine(20);

	cout << endl;
	return 0;
}

/*****************************************
	Function: printSolidLine
	Description: Output the number of stars
	param: numStars - number of stars
	return: void
*****************************************/
void printSolidLine(int numStars)
{

	for (int i=0; i<numStars; i++)
	{
		cout << "*";

	}
} // End printSolidLine

// Problems: I was trying to make printSolidLine an int instead of void.