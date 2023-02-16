/*
Henry Lewis, James Horton, Mike Pratt
Title: Ice Cream Activity
Due: 4/14/22
Description: We are writing a function that uses switch statements. 
*/

#include <iostream> // Library for input/output
using namespace std; // Standard collection of names
void group1( int flavor ); //Flavor choosing function

int main( ) // Main part of program
{
	int flavor; // Flavor of ice cream

	cout << "What number (flavor) do you want? Say a number between 1 and 10." << endl;
	cin >> flavor;
	group1( flavor );

	cout << endl;
	return 0;
}
/*****************************
	Function: group1
	Description: The patron chooses their flavor
	param: flavor - flavor of ice cream
	return: void
*****************************/
void group1(int flavor)
{
	switch ( flavor )
	{
		case 1:
			cout << "Vanilla";
			break;
		case 2:
			cout << "Chocolate";
			break;
		case 3:
			cout << "Cherry";
			break;
		case 4:
			cout << "Mint Chocolate Chip";
			break;
		case 5:
			cout << "Cookie Dough";
			break;
		case 6:
			cout << "Cheesecake";
			break;
		case 7:
			cout << "Strawberry";
			break;
		case 8:
			cout << "Rockie Road";
			break;
		case 9:
			cout << "Swirl";
			break;
		case 10:
			cout << "Neopolitan";
			break;
	}
} // End group1

// Problems: 