// p5: Write a program to sum first ten natural numbers using while loop.
// Write a program to implement program 5 using ‘for’ and ‘do - while’ loop.

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

// do-while

int main()
{

    int sum = 0;
    int a = 1;
    do{
        sum += a;
        a++;
    } while (a < 11);
printf("%d \n", sum );

        return 0;
}