#include <iostream>
using namespace std;

int main()
{
   int year,i=1;
   cout << "Enter a year ( 1583-3000 ): ";
  
   //check leap
	cin >> year;
	cout << "year " << year << " is a " << ((year % 4 == 0) && (year % 100 != 0)||(year%400==0) ? "leap" : "common") << " year\n";
   

   system( "pause" );
}
