//Reverse a number

#include<iostream>
using namespace std;             
int main()
{
    int number, rev_number = 0 ;
    cout<<"Enter a number: ";
    cin>>number;

    while (number != 0)
    {
        rev_number = number % 10 + rev_number*10 ;
        number = number / 10;
    }

    cout<< rev_number;

    return 0;
}