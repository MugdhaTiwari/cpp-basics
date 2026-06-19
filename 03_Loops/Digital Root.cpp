//Digital Root of a Number

#include<iostream>
using namespace std;
int main()
{
    int num, d_root, sum;
    cout << "Enter a number" << endl ;
    cin  >> num ;

    while (num >= 10)
    {

        sum = 0;
        
        while( num > 0)
        {
           sum = num % 10 + sum;
           num = num / 10; 
        }
    
        num = sum;

    }

    d_root = num;

    cout<< "The Digital Root of the number is " << d_root << endl;

    return 0;
    
}












