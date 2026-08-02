// Reversing an array

#include<iostream>
using namespace std;

void rev_array( int arr[] , int arr_size )
{
    int start = 0, end = arr_size - 1;
    
    while( start < end )
    {
        swap( arr[start], arr[end]);

        start++;
        end--;

    }
}



int main()
{
    int arr[5];
    int arr_size = 5;
    
    for( int i = 0 ; i < 5 ; i++ )
    {
        cin >> arr[i]; 
    }
    
    rev_array ( arr , arr_size );

    for( int i = 0 ; i < 5 ; i++ )
    {
        cout << arr[i] << " ";
    }

    return 0;
}