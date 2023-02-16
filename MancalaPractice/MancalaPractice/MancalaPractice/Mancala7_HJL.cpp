/*
Henry Lewis
Title: Mancala 6
Due: 4/27/2022
Description: Creating the gameOverCheck function
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
int gameOverCheck( int beadArray[MAX] ); // Checks to see if a player has won
void testArray( int beadArray[MAX] ); // Test array for testing purposes
int getStartingBin( int player, int beadArray[MAX] ); // Function to determine who starts.

int main( )
{
	int beadArray[MAX]; // Array for bead-bin values
	int winner = -1; // Integer to determine who won the game

	// initializeArray( beadArray );
	testArray( beadArray );
	drawBoard( beadArray );
	cout << endl;
	winner = gameOverCheck( beadArray );
	drawBoard( beadArray );
	cout << endl;
	if ( winner == 1 )
	{
		cout << "Player 1 wins.";
	}
	else if ( winner == 2 )
	{
		cout << "Player 2 wins.";
	}
	else if ( winner == 3 )
	{
		cout << "Draw.";
	}

	cout << endl;

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
	param: beadarray[] - The array values
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
		else { ; }
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
		else { ; }
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

/*****************************************
	Function: gameOverCheck
	Description: Checks to see if the game has been won or drawn.
	param: beadArray[] - bead-bin values
	return: winner - value that states who has won.
*****************************************/
int gameOverCheck( int beadArray[MAX] )
{
	int winner = -1; // Winner value
	int p1MiddleBins = 0; // value for p1 all middle bins
	int p2MiddleBins = 0; // value for p2 all middle bins

	for ( int i = 0; i < 6; i++ )
	{
		p1MiddleBins = p1MiddleBins + beadArray[i];
	}

	for ( int i = 12; i > 6; i-- )
	{
		p2MiddleBins = p2MiddleBins + beadArray[i];
	}
	if ( p1MiddleBins == 0 || p2MiddleBins == 0 )
	{
		if ( p1MiddleBins == 0 )
		{
			beadArray[6] = beadArray[6] + p2MiddleBins;
		}
		else
		{
			beadArray[13] = beadArray[13] + p1MiddleBins;
		}
		for ( int i = 0; i < 6; i++ )
		{
			beadArray[i] = 0;
		}
		for ( int i = 12; i > 6; i-- )
		{
			beadArray[i] = 0;
		}
		if ( beadArray[6] > beadArray[13] )
		{
			winner = 1;
		}
		else if ( beadArray[13] > beadArray[6] )
		{
			winner = 2;
		}
		else
		{
			winner = 3;
		}
	}
	else { ; }

	return winner;
} // End gameOverCheck

/*****************************************************************
	 Function: testArray
	 Description: Fill beadArray with any values for testing
	 param: beadArray[ ] - number of beads in each bin
	 return: void
*****************************************************************/
void testArray( int beadArray[MAX] )
{
	//example has the array initialized so that there will be a draw.
	beadArray[0] = 0;
	beadArray[1] = 0;
	beadArray[2] = 2;
	beadArray[3] = 0;
	beadArray[4] = 1;
	beadArray[5] = 0;
	beadArray[6] = 20;

	beadArray[7] = 0;
	beadArray[8] = 0;
	beadArray[9] = 0;
	beadArray[10] = 0;
	beadArray[11] = 0;
	beadArray[12] = 0;
	beadArray[13] = 17;
} //end testArray

/*****************************************************************
	 Function: getStartingBin
	 Description: Fill beadArray with any values for testing
	 param: player - who will start; beadArray[ ] - number of beads in each bin
	 return: player - who will start
*****************************************************************/
int getStartingBin( int player, int beadArray[MAX] )
{
	int p1low;
	int p1high;
	int p2low;
	int p2high;
	int rvPlayer; // The return value for which person will be player 1.
	
	if ( player == 1 )
	{
		p1low = 0;
		p1high = 5;
	}
	else
	{
		p2low = 7;
		p2high = 12;
	}

	cout << "Which bins do you want?";
	cin >> rvPlayer;

} // End getStartingBin
// Problems: 