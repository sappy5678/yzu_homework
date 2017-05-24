#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int number; // integer read from user
   int a, b, c, d, e;
   cout << "Enter a five-digit integer: "; // prompt
   cin >> number; // read integer from user

   //separate number
   a = number / 10000;
   b = number % 10000/1000;
   c = number % 10000%1000/100;
   d = number % 10000%1000%100/10;
   e = number % 10000 % 1000 % 100 % 10/1;
   cout << a << " " << b << " " << c << " " << d << " " << e << endl;


   //cout << number << endl;

   system( "pause" );
} // end main
