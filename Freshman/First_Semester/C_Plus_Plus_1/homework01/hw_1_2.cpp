#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int number; // integer read from user

   cout << "Enter an integer: "; // prompt
   cin >> number; // read integer from user

   //check number
   if (number % 2 == 0)cout << "The integer " << number << " is even." << endl;
   else cout << "The integer " << number << " is odd." << endl;



   system( "pause" );
} // end main
