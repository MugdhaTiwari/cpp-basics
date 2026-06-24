//Daimond of Stars

#include<iostream>
using namespace std;

int main()
{
   int i, n , j ;

    for ( i = 1; i = n; i++ )                   //Loop to switch row
    {
       
       for ( j = 1 ; j <= n - i ; j++ )          // Loop for Spaces
       {
          cout << " ";
       }
       
       for ( j = 1; j <= 2 * i - 1; j++ )       //Loop for Stars
       {
          cout << " * " ;
       }
                             
    }

    return 0;
}
