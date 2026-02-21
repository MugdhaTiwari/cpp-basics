
// This program reads different data types from input
// and prints each value on a new line in the same order.
// The float value is printed up to 3 decimal places
// and the double value is printed up to 9 decimal places.

#include <stdio.h>

int main() {

    // Declare variables of different data types
    int a;       
    long b;       
    char c;       
    float f;      
    double d;     

    // Read input values using scanf
    // %d  -> int
    // %ld -> long
    // %c  -> char
    // %f  -> float
    // %lf -> double
    scanf("%d %ld %c %f %lf", &a, &b, &c, &f, &d);

    // Print each variable on a new line
    printf("%d\n", a);          
    printf("%ld\n", b);         
    printf("%c\n", c);          

    // Print float rounded to 3 decimal places
    printf("%.3f\n", f);

    // Print double rounded to 9 decimal places
    printf("%.9lf\n", d);

    return 0;   
}

