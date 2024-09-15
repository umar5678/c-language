// Write a program to calculate the factorial of a given number using a for loop.
// 9. Repeat 8 using while loop.

// #include <stdio.h>

// int main()
// {
//     int n = 4;
//     int factorial = 1;
//     for (int q = 1; q <= n; q++)
//     {
//         factorial *= q;
//     }
//     printf("Factorial of %d is %d \n", n, factorial);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 5;
    int factorial = 1;
    int i = 1;
    while (i <= n)

    {
        factorial *= i;
        i++;
    }
    printf("!%d = %d \n", n, factorial);

    return 0;
}