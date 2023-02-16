/*
Name:
Title:  Warmup Activity - If statements and random number
Due Date: 3/8/2022
Description: Learning to code if statements
*/

/*
A restaurant host seats patrons. The host seats a party of 1 at the counter.
A party of 2 is seated at a small table. Other-sized parties are seated at a large table.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
     srand(time(0));
     int patrons;        //number in a party, party can be from 1 to 6
     int low = 1;        //low range of patrons
     int high = 6;       //high range of patrons

     /**** Step 1: Use the patron variable and the random number forumla to calculate number of patrons and output patrons variable with approprate message. Run the code several times to verify it works before moving to next. ****/
     patrons = rand( ) % (high - low + 1) + low;
     cout << "Number of patrons: " << patrons << endl;
     
     /**** Step 2: Add if-else statement to output "Seat at counter" for party of 1 and "Seat at table" for party of 2 or more. Run the code several times to verify it works before moving to next. ****/
     if ( patrons < 2 )
     {
         cout << "Seat at counter" << endl;
     }
     else
     {
         cout << "Seat at table" << endl;
     }
     
     /**** Step 3: Modify if-else statement to if-elseif-else so party of two are seated at small table and other-sized partes are seated at the large table. Run the code several times to verify it works. ****/
     if ( patrons < 2 )
     {
         cout << "Seat at counter" << endl;
     }
     else if ( patrons == 2 )
     {
         cout << "Seat at small table" << endl;
     }
     else
     {
         cout << "Seat at large table" << endl;
     }

     cout << endl;
     return 0;
}
//problems: I had a & instead of % on like 26
