/*
Henry Lewis
Title: Mancala 8
Due: 4/30/2022
Description: Creating the dropBeads function which places the beads in the appropriate bins
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
int getStartingBin( int player, int beadArray[MAX] ); // Function to determine who starts
void dropBeads( int player, int beadArray[MAX] ); // Places beads in appropriate bins

int main( )
{
	int beadArray[MAX]; // Array for bead-bin values
	int winner = -1; // Integer to determine who won the game
	int player = 1; // Which player is currently going
	int binChoice; // Bin to play

	// initializeArray( beadArray ); 
	testArray( beadArray ); // For testing purposes
	// printArray( beadArray );
	drawBoard( beadArray );
	//binChoice = getStartingBin( player, beadArray );
	//cout << "You chose bin " << binChoice << endl;
	dropBeads( player, beadArray );
	winner = gameOverCheck( beadArray );
	drawBoard( beadArray );
	
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
	else
	{
		cout << "No winner.";
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
	cout << endl;

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
	beadArray[10] = 4;
	beadArray[11] = 0;
	beadArray[12] = 0;
	beadArray[13] = 17;
} //end testArray

/*****************************************************************
	 Function: getStartingBin
	 Description: The player is chosing which bin to start with
	 param: player - who will be going; beadArray[ ] - number of beads in each bin
	 return: binChoice - which bin is chosen
*****************************************************************/
int getStartingBin( int player, int beadArray[MAX] )
{
	int low; // Low value for bin
	int high; // high value for bin
	int binChoice; // players bin choice

	if ( player == 1 )
	{
		low = 0;
		high = 5;
	}
	else
	{
		low = 7;
		high = 12;
	}

	cout << "Player " << player << " please choose a bin between " << low << " and " << high << "." << endl;
	cin >> binChoice;
	while ( binChoice > high || binChoice < low || beadArray[binChoice] == 0 )
	{
		cout << "Not a valid bin. Choose another bin." << endl;
		cin >> binChoice;
	}

	return binChoice;

} // End getStartingBin

/*****************************************************************
	 Function: dropBeads
	 Description: drop beads in appropriate bins
	 param: player - who will be going; beadArray[ ] - number of beads in each bin
	 return: none
*****************************************************************/
void dropBeads( int player, int beadArray[MAX] )
{
	int endBin; // Bin that holds scored beads
	int oppEndBin; // Bin that holds opp scored beads
	int bin; // Bin choice
	int hand; // Beads in hand
	
	if ( player == 1 )
	{
		endBin = 6;
		oppEndBin = 13;
	}
	else
	{
		endBin = 13;
		oppEndBin = 6;
	}

	do
	{
		bin = getStartingBin( player, beadArray );
		//printArray( beadArray );

		do
		{
			hand = beadArray[bin];
			beadArray[bin] = 0;
			
			while ( hand > 0 )
			{
				bin++;
				if ( bin == oppEndBin )
				{
					bin++;
				}
				else { ; }
				if ( bin > 13 )
				{
					bin = 0;
				}
				else { ; }
				hand--;
				beadArray[bin]++;
				//printArray( beadArray );
			}

		} while ( beadArray[bin] > 1 && bin != endBin );

		drawBoard( beadArray );

	} while ( bin == endBin && gameOverCheck( beadArray ) == -1);

} // End dropBeads

  // Problems: 