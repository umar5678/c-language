// Write a program to calculate the factorial of a given number using a for loop.


#include <stdio.h>

int main()
{
    int n = 4;
    int factorial = 1;
    for (int q = 1; q <= n; q++)
    {
        factorial *= q;
    }
    printf("Factorial of %d is %d \n", n, factorial );
    
        return 0;
}