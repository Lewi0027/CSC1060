/*
Henry Lewis
Title: First Program Checksheet
Due: 3/4/2022
Description: Creating my first program in C++
*/

#include <iostream> // Library for input/output
#include <iomanip>
using namespace std; // Standard collection of names

int main( ) // Main part of program
{
	double subtotal; // Subtotal from user
	double discount; // Discount percent that is based on subtotal
	double amount; // Discounted amount
	double total; // Invoice total
	cout << "Invoice Total Calculations" << endl << endl;
	cout << "Enter subtotal: ";
	cin >> subtotal;
	if ( subtotal >= 200 )
	{
		discount = 0.2;
	}
	else if ( subtotal >= 100 )
	{
		discount = 0.1;
	}
	else
	{
		discount = 0.05;
	}
	amount = discount * subtotal;
	total = subtotal - amount;
	cout << "Discount percent: " << discount;
	cout << "Discount amount: " << amount;
	cout << "Invoice total: " << total;

	cout << endl; // Outputs a new line
	return 0; // Program finished succesfully
}

// Problems: Forgot second << for cout 