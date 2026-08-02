//   Hightest element in an array

#include<iostream>
using namespace std;
int main()
{
   int a[5] ;

   for( int i = 0 ; i < 5 ; i++ )
   {
       cin >> a[i];
   }

   int largest = a[0], largest_position = 0;

   for (int i = 1 ; i < 5 ; i++ )
   {
        if ( largest < a [i])
        {
             
            largest = a [i];
            largest_position = i + 1 ; 
        }

   }
    cout << largest << " " << largest_position ;

   return 0;
}
