/*
Henry Lewis
Title: Mancala 4
Due: 4/20/2022
Description: Creating and outputting the array for bead-bin values
*/

#include <iostream> // Library for input/output
#include <iomanip> // Library for formatting
using namespace std; // Standard collection of names

const int MAX = 14; // Max number of bins in beadArray
void printSolidLine( int numStars ); // Ouput stars for edges of board
void printDottedLine( ); // Output for dotted line
void drawBoard( ); // Draw the Mancala board
void showTopRowNumbers( ); // Create output for top row bin numbers
void showBottomRowNumbers( ); // Create output for bottom row bin numbers
void initializeArray( int beadArray[MAX] ); // Turn beadArray values into an array
void printArray( int beadArray[MAX] ); // Output beadArray values

int main( )
{
	int beadArray[MAX]; // Array for bead-bin values

	initializeArray( beadArray );
	printArray( beadArray );
	cout << endl;
	drawBoard( );

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
	cout << "   6  *" << endl;
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

// Problems: I was using = instead of == for my if conditions.