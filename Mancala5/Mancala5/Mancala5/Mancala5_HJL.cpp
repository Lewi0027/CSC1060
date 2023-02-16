/*
Henry Lewis
Title: Mancala 5
Due: 4/22/2022
Description: Moving beadArray values to board
*/

#include <iostream> // Library for input/output
#include <iomanip> // Library for formatting
using namespace std; // Standard collection of names

const int MAX = 14; // Max number of bins in beadArray
void printSolidLine( int numStars ); // Ouput stars for edges of board
void printDottedLine( ); // Output for dotted line
void drawBoard( int beadArray[MAX] ); // Draw the Mancala board
void showTopRowNumbers( ); // Create output for top row bin numbers
void showBottomRowNumbers( ); // Create output for bottom row bin numbers
void initializeArray( int beadArray[MAX] ); // Turn beadArray values into an array
void printArray( int beadArray[MAX] ); // Output beadArray values
void showTopBins( int beadArray[MAX] ); // Create output for top bins for board
void showBottomBins( int beadArray[MAX] ); // Create output for bottom bins for board

int main( )
{
	int beadArray[MAX]; // Array for bead-bin values

	initializeArray( beadArray );
	drawBoard( beadArray );

	return 0;
} // End main

/*****************************************
	Function: printSolidLine
	Description: Output the number of stars
	param: numStars - number of stars
	return: void
*****************************************/
void printSolidLine( int numStars )
{

	for ( int i = 0; i < numStars; i++ )
	{
		cout << '*';

	}
} // End printSolidLine

/*****************************************
	Function: printDottedLine
	Description: Output dotted line
	param: none
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
	param: none
	return: void
*****************************************/
void drawBoard( int beadArray[MAX] )
{
	printSolidLine( 57 );
	cout << endl;
	printDottedLine( );
	showTopRowNumbers( );
	printDottedLine( );
	showTopBins( beadArray );
	cout << endl;
	printDottedLine( );
	cout << "*  13  ";
	printSolidLine( 43 );
	cout << "   6  *" << endl;
	printDottedLine( );
	showBottomRowNumbers( );
	printDottedLine( );
	showBottomBins( beadArray );
	cout << endl;
	printDottedLine( );
	printSolidLine( 57 );

} // End drawBoard

/*****************************************
	Function: showTopRowNumbers
	Description: Create the output for the top bins with numbers
	param: none
	return: void
*****************************************/
void showTopRowNumbers( )
{
	cout << "*      ";
	for ( int i = 0; i < 6; i++ )
	{
		cout << '*' << setw( 4 ) << i << setw( 2 ) << ' ';
	}
	cout << "*      *" << endl;

} // End showTopRowNumbers

/*****************************************
	Function: showBottomRowNumbers
	Description: Create the output for the bottom bins with numbers
	param: none
	return: void
*****************************************/
void showBottomRowNumbers( )
{
	cout << "*      ";
	for ( int i = 12; i > 6; i-- )
	{
		cout << '*' << setw( 4 ) << i << setw( 2 ) << ' ';
	}
	cout << "*      *" << endl;
} // End bottomRowNumbers

/*****************************************
	Function: initializeArray
	Description: Create an array out of beadArray values
	param: beadArray[] - bead-bin values
	return: void
*****************************************/
void initializeArray( int beadArray[MAX] )
{
	for ( int i = 0; i < MAX; i++ )
	{
		beadArray[i] = 4;
		if ( i == 6 || i == 13 )
		{
			beadArray[i] = 0;
		}
	}
} // End initializeArray

/*****************************************
	Function: printArray
	Description: Output all the array values and the break line
	param: beadArray[] - bead-bin values
	return: void
*****************************************/
void printArray( int beadArray[MAX] )
{
	for ( int i = 0; i < MAX; i++ )
	{
		cout << beadArray[i] << " ";
		if ( i == 6 )
		{
			cout << "| ";
		}
	}
} // End printArray

/*****************************************
	Function: showTopBins
	Description: Create an output that shows bead-bins values for top bins
	param: beadArray[] - bead-bin values
	return: void
*****************************************/
void showTopBins( int beadArray[MAX] )
{
	cout << "*      *";
	for ( int i = 0; i < 6; i++ )
	{
		cout << setw( 4 ) << beadArray[i] << setw( 3 ) << "*";
	}
	cout << "      *";
} // End showTopBins

/*****************************************
	Function: showBottomBins
	Description: Create an output that shows bead-bins values for top bins
	param: beadArray[] - bead-bin values
	return: void
*****************************************/
void showBottomBins( int beadArray[MAX] )
{
	cout << "*";
	for ( int i = 13; i > 5; i-- )
	{
		cout << setw( 4 ) << beadArray[i] << setw( 3 ) << "*";
	}
} // End showBottomBins
// Problems: None.