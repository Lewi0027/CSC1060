/*
Henry Lewis
Title: While Loop Checksheet Redo
Due: 3/23/2022
Description: Creating a program that uses a while loop
*/

#include <iostream> // Library for input/output
using namespace std; // Standard collection of names

int main( ) // Main part of program
{
	int classes; // Number of classes
	int students; // Number of students
	int totalStudents = 0; // Number of total students
	int count = 0; // Counter that is a loop control variable
	double average; // Variable used to calculate average

	cout << "How many classes?" << endl;
	cin >> classes;

	while ( classes > count )
	{
		cout << "How many students in the class?" << endl;
		cin >> students;
		totalStudents = totalStudents + students;
		cout << "Total students: " << totalStudents << endl;
		count = count + 1;
		cout << "Count is: " << count << endl;

	}

	average = (double) totalStudents / classes;
	cout << "Total students: " << totalStudents << endl;
	cout << "Number of classes: " << classes << endl;
	cout << "Average students per class: " << average << endl;


	cout << endl;
	return 0;
}

// Problems: I need to remember to use double for anything that might be part of an equation with decimal values.