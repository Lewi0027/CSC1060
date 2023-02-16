/*
Henry Lewis
Title: Mancala 2
Due: 4/15/2022
Description: Creating dotted line for Mancala.
*/

#include <iostream> // Library for input/output
#include <iomanip> // Library for formatting
using namespace std; // Standard collection of names

void printSolidLine(int numStars); // Ouput stars for edges of board
void printDottedLine( ); // Print dotted line

int main( )
{
	printSolidLine(57);
	cout << endl;
	printDottedLine( );
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

	for ( int i = 0; i < numStars; i++ )
	{
		cout << '*';

	}
} // End printSolidLine

/*****************************************
	Function: printDottedLine
	Description: Output dotted line
	return: void
*****************************************/
void printDottedLine( )
{
	for ( int i = 0; i < 8; i++ )
	{
		cout << '*';
		for ( int i = 0; i < 6; i++ )
		{
			cout << ' ';
		}
	}
	cout << '*' << endl;
} // End printDottedLine

// Problems: No problems.