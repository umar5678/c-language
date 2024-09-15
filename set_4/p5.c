// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

// int main()
// {
//     int sum = 0;
//     for (int a = 1; a <= 10; a++)
//     {
//         sum += a;
//     }
//     printf("Sum of first 10 natural numbers is %d \n", sum );
    
//         return 0;
// }

#include <stdio.h>

int main()
{
    int sum = 0;
    int a = 1;
    while(a <= 10)
    {
        sum += a;
        a++;
    }
    printf("Sum of first 10 natural numbers is %d \n", sum );

    return 0;
}