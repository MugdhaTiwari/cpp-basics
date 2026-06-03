#include <iostream>
using namespace std;
int main(){
    int number, largestDigit = 0;
    cout << "Enter a number: ";
    cin  >> number; 

    // Loop through each digit of the number
    while ( number > 0 )
    {
        int digit = number % 10;         // Get the last digit
        if ( digit > largestDigit )
         {
            largestDigit = digit;        // Update largestDigit if current digit is larger
         }
         
         number =  number / 10;          // Remove the last digit
    }
    cout << "The largest digit in the number is: " << largestDigit << endl;
     
    return 0;
}
