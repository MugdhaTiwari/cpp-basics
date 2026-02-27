// Program to find the greatest among three integers.

#include <stdio.h>

int main()
{
    int a, b, c;

    // Prompt the user to enter three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if 'a' is greater than or equal to both 'b' and 'c'
    // If true, 'a' is the greatest number
    if(a >= b && a >= c)
    {
        printf("%d is the greatest number\n", a);
    }

    // If the above condition is false, check if 'b' is greater than or equal to both 'a' and 'c'
    else if(b >= a && b >= c)
    {
        printf("%d is the greatest number\n", b);
    }
    
    // If neither 'a' nor 'b' is the greatest,
    // then 'c' must be the greatest number
    else
    {
        printf("%d is the greatest number\n", c);
    }

    return 0;
}