
// This program takes an integer input from the user.
// If the number is between 1 and 9, it prints the number in English words.
// Otherwise, it prints "Greater than 9".

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Array storing English words for numbers 1 to 9
    string num[9] = {"one","two","three","four","five","six","seven","eight","nine"};

    // Check if the number is between 1 and 9 (inclusive)
    if(n >= 1 && n <= 9)
    {
        // Print the corresponding word from the array
        // Since array index starts from 0, we use n-1
        cout << num[n - 1] << endl;
    }
    else
    {
        // If number is not between 1 and 9
        cout << "Greater than 9" << endl;
    }

    return 0;
}
