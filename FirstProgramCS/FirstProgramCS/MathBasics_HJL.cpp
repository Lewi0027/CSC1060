/*
Henry Lewis
Title: Math Basics Checksheet
Due: 3/4/2022
Description: Creating my first math program in C++
*/

#include <iostream> // library for input/output
using namespace std; // standard collection of names

int main( ) // main part of program
{
	
	int num1; // Initialize num1
	int num2;
	int answer;
	num1 = 10; // Assign num1
	num2 = 20;
	answer = num1 + num2;
	cout << num1 << " + " << num2 << " = " << answer << endl; // Display addition equation
	answer = num1 - num2;
	cout << num1 << " - " << num2 << " = " << answer << endl; // Display subtraction equation
	answer = num2 - num1;
	cout << num2 << " - " << num1 << " = " << answer << endl;
	answer = num1 * num2;
	cout << num1 << " * " << num2 << " = " << answer << endl; // Display multiplicaction equation
	answer = num1 / num2;
	cout << num1 << " / " << num2 << " = " << answer << endl; // Display division equation
	answer = num2 / num1;
	cout << num2 << " / " << num1 << " = " << answer << endl;
	answer = num1 % num2;
	cout << num1 << " % " << num2 << " = " << answer << endl; // Display modulus equation
	answer = num2 % num1;
	cout << num2 << " % " << num1 << " = " << answer << endl;
	
	// This results in a functional program
	/*
	num1 = 0; // Reassign num1
	answer = num1 + num2;
	cout << num1 << " + " << num2 << " = " << answer << endl; // Display addition equation
	answer = num1 - num2;
	cout << num1 << " - " << num2 << " = " << answer << endl; // Display subtraction equation
	answer = num2 - num1;
	cout << num2 << " - " << num1 << " = " << answer << endl;
	answer = num1 * num2;
	cout << num1 << " * " << num2 << " = " << answer << endl; // Display multiplicaction equation
	answer = num1 / num2;
	cout << num1 << " / " << num2 << " = " << answer << endl; // Display division equation
	answer = num2 / num1;
	cout << num2 << " / " << num1 << " = " << answer << endl;
	answer = num1 % num2;
	cout << num1 << " % " << num2 << " = " << answer << endl; // Display modulus equation
	answer = num2 % num1;
	cout << num2 << " % " << num1 << " = " << answer << endl;
	*/
	// This results in an integer division by zero. Exception on handle error.
	/*
	double num1; // Initialize num1
	double num2;
	double answer;
	num1 = 10; // Assign num1
	num2 = 20;
	answer = num1 + num2;
	cout << num1 << " + " << num2 << " = " << answer << endl; // Display addition equation
	answer = num1 - num2;
	cout << num1 << " - " << num2 << " = " << answer << endl; // Display subtraction equation
	answer = num2 - num1;
	cout << num2 << " - " << num1 << " = " << answer << endl;
	answer = num1 * num2;
	cout << num1 << " * " << num2 << " = " << answer << endl; // Display multiplicaction equation
	answer = num1 / num2;
	cout << num1 << " / " << num2 << " = " << answer << endl; // Display division equation
	answer = num2 / num1;
	cout << num2 << " / " << num1 << " = " << answer << endl;
	answer = num1 % num2;
	cout << num1 << " % " << num2 << " = " << answer << endl; // Display modulus equation
	answer = num2 % num1;
	cout << num2 << " % " << num1 << " = " << answer << endl;
	*/
	// This results in '%': illegal, left operand has type 'double'. Cannot use double for modulus. Logic error.

	cout << endl; // Outputs a new line
	return 0; // Program finished succesfully
}

// Problems: My console was still open and this prevented me from updating the code.