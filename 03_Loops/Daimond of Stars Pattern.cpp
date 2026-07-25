//Daimond of Stars

#include<iostream>
using namespace std;

int main()
{
   int n, i , j ;

   cout << "Enter n ";
   cin >> n ;

    for ( i = 1 ; i <= n ; i++ )                   //Loop to switch row
    {
       
       for ( j = 1 ; j <= n - i ; j++ )          // Loop for Spaces
       {
          cout << " ";
       }
       
       for ( j = 1 ; j <= 2 * i - 1 ; j++ )       //Loop for Stars
       {
          cout << "*" ;
       }

       cout << endl ;
                             
    }

    for ( i = n - 1 ; i >= 1 ; i-- )
    {

        for ( j = 1 ; j <= n - i ; j++ )
        {
           cout << " " ;   
        }

        for ( j = 1; j <= 2*i-1 ; j++ )
        {
           cout << "*" ;
        }
        
        cout << endl ;

    }

    return 0;

}
