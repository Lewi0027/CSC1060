/*
Name: Henry Lewis
Title:  Nested Loop In-Class Exercise
Due Date: 3/30/2022
Directions:  The program will compute the average of a set of salary values. Follow the instructions in the block comments then run the program.  You can delete the all block comments after your code is working.
Data 1: n
Data 2: y 10 y 10 y -10 40 n
Data 3: y 5 y 6 n
*/
#include <iostream>
using namespace std;

int main ( )
{
     char answer;        //user's answer to add salary
     int salary;         //user enters a salary
     int count = 0;      //counts the number of salaries entered by user
     int total = 0;      //total of all salaries
     double average;     //average of all salaries

     cout << "Do you want to add salary (y/n): " << endl;
     cin >> answer;
     answer = tolower (answer);  //this line converts the value to lowercase

     while ( answer == 'y' )
     {
         do
         {
             cout << "What is your salary?" << endl;
             cin >> salary;

         } while ( salary <= 0 );

         count++;
         total = total + salary;
         cout << "Is there another salary to enter (y/n)?";
         cin >> answer;
         salary = tolower (salary);
     }

     if ( count > 0 )
     {
         average = (double)total / count;
         cout << "Average salary is: " << average << endl;
     }
     else
     {
         cout << "No data" << endl;
     }

     cout << endl;
     return 0;
}
//problems: I forgot to use double equals for char values.
//Step 5 question: We are checking if the count is greater than 0 so that we don't divide by zero and crash the program.
