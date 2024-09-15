// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int n = 131;
    int isPrime = 1;

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
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