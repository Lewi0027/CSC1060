/*
Henry Lewis, Mike Pratt, Rachel Powell
Title: Ice Cream 2
Due: 4/26/22
Description: We are making multiple loops to call other functions
*/

#include <iostream> // Library for input/output
#include <iomanip> // Library for setprecision
using namespace std; // Standard collection of names
void group1( int num ); // Call on function 1
void group2( ); // Call on function 2
double group3( int num); // Call on function 3

int main( )
{
	cout << "Running program" << endl;
	group2( );
	cout << "Program ran";

	cout << endl;
	return 0;
}

void group2( ) // Main part of program
{
	double cost; // Cost

	for ( int i = 1; i < 11; i++ )
	{
		group1( i );
		cout << " ";
		cost = group3( i );
		cout << "$" << fixed << setprecision( 2 ) << cost;
		// cout << i;
		cout << endl;
	}
}

void group1( int num )
{
	cout << "In function, num is " << num;
} // End group1

double group3( int num )
{
	return num * 10.0;
} // End group3

// Problems: 