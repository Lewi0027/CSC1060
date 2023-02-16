/* Name: Henry Lewis
Debugging Check Sheet
Correct the syntax errors first.
Find one syntax error, fix and compile.
Then repeat.
After a successful compile, fix the logic errors.
*/

#include <iostream>
using namespace std;

int main()
{
    double piePrice = 4.35;
    double cost;
    double radius = 4.5;
    double circumference;
    double pi = 3.14;

    cost = 3 * piePrice;
    circumference = 2 * pi * radius;

    cout << "The cost of the apple pie in dollars: $" << cost << endl;
    cout << "I love pies " << endl;
    cout << "The circumference of the circle is  " << endl;
    cout << "2 x pi x radius =  " << circumference << endl;

    cout << endl;
    system("pause");
    return 0;
}
//problems: I did not have any problems with this checksheet.
/*
Error 1: expected a ';'
14: Missing semicolon at end of line

Error 2: identifier "price" is undefined
20: Variable is spelled wrong. Change price to piePrice

Error 3: no operator "<<" matches these operands
23: end should be endl, undefined variable

Error 4: missing closing quote
24: "I love pies ' should be "I love pies " 

Error 5: no operator ">>" matches these operands
26: change >> before endl to <<

Error 6: 
21: change pi + radius to pi * radius

Error 7:
15: change int to double to get the correct price

Error 8:
23: change cents to dollars
*/