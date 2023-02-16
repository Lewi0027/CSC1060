/*
Henry Lewis
Title: Mancala 3
Due: 4/18/2022
Description: Creating the board.
*/

#include <iostream> // Library for input/output
#include <iomanip> // Library for formatting
using namespace std; // Standard collection of names

//const int MAX = 14; // Max number of bins in beadArray
void printSolidLine(int numStars); // Ouput stars for edges of board
void printDottedLine( ); // Output for dotted line
void drawBoard( ); // Draw the Mancala board
void showTopRowNumbers( ); // Create output for top row bin numbers
void showBottomRowNumbers( ); // Create output for bottom row bin numbers

int main( )
{
	drawBoard( );

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

/*****************************************
	Function: drawBoard
	Description: Draw mancala board
	return: void
*****************************************/
void drawBoard( )
{
	printSolidLine( 57 );
	cout << endl;
	printDottedLine( );
	showTopRowNumbers( );
	printDottedLine( );
	printDottedLine( );
	printDottedLine( );
	cout << "*  13  ";
	printSolidLine( 43 );
	cout << "   0  *" << endl;
	printDottedLine( );
	showBottomRowNumbers( );
	printDottedLine( );
	printDottedLine( );
	printDottedLine( );
	printSolidLine( 57 );
	
} // End drawBoard

/*****************************************
	Function: showTopRowNumbers
	Description: Create the output for the top bins with numbers
	return: void
*****************************************/
void showTopRowNumbers( )
{
	cout << "*      ";
	for (int i = 0; i < 6; i++)
	{
		cout << '*' << setw(4) << i << setw(2) << ' ';
	}
	cout << "*      *" << endl;

}

/*****************************************
	Function: showBottomRowNumbers
	Description: Create the output for the bottom bins with numbers
	return: void
*****************************************/
void showBottomRowNumbers( )
{
	cout << "*      ";
	for ( int i = 12; i > 6; i-- )
	{
		cout << '*' << setw(4) << i << setw(2) << ' ';
	}
	cout << "*      *" << endl;
}

// Problems: No problems.