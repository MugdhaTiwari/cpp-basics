// Simple Calculator Program using switch statement

#include <iostream>
using namespace std;

int main ()
{
    int a, b;
    char op;

    // Ask user to enter operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Ask user to enter operands
    cout << "Enter 1st and 2nd operand: ";
    cin >> a >> b;

    // Use switch statement to perform operation based on user input
    // 'break' prevents execution from continuing into the next case
    switch (op)
    {
        case '+':
            cout << "The output is: " << a + b;
            break;

        case '-':
            cout << "The output is: " << a - b;
            break;

        case '*':
            cout << "The output is: " << a * b;
            break;

        // Check for division by zero before performing division
        case '/':
            if(b != 0)
                cout << "The output is: " << a / b;
            else
                cout << "Error! Division by 0 is not allowed.";
            break;

        // Default case handles invalid operator input
        default:
            cout << "Error! Invalid operator.";
            break;
    }

    return 0;
}

