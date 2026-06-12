// This program finds the largest and smallest digit in a given number.
// It takes an integer input from the user and processes each digit 
//to find the largest and smallest digits.

#include <iostream>
using namespace std;
int main(){
    int number, largestDigit = 0 , smallestDigit = 9;
    cout << "Enter a number: ";
    cin  >> number; 
   
    if (number < 0)
         {
            number = -number;            // Convert to positive if the number is negative
         }

    // Loop through each digit of the number
    while ( number > 0 )
    {
        int digit = number % 10;         // Get the last digit
        if ( digit > largestDigit )
         {
            largestDigit = digit;        // Update largestDigit if current digit is larger
         }
        
         if ( digit < smallestDigit )
         {
            smallestDigit = digit;       // Update smallestDigit if current digit is smaller
         }
         
         number =  number / 10;          // Remove the last digit
    }

    if ( number == 0 )
         {
            smallestDigit = 0;             // If the number is 0, then the smallest digit is also 0
            largestDigit = 0;              // If the number is 0, then the largest digit is also 0
         }

    cout << "The largest digit in the number is: " << largestDigit << endl;
    cout << "The smallest digit in the number is: " << smallestDigit << endl;

    return 0;
}
