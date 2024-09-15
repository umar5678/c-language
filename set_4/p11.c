// Implement 10 using other types of loops.

// p10: Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int n = 149;
    int isPrime = 1;

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        int i = 2;

        while ( i <= n / 2)

        {
            if(n % i== 0)
            {
                isPrime = 0;
            }
            i++;
        }
    }
    if (isPrime)
    {
        printf("%d is prime \n", n);
    }
    else
    {
        printf("%d is not prime \n", n);
    }

    return 0;
}