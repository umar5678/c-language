// Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main()
{

    int n = 27;

    for (int i = 1; i < 11; i++)

    {
        printf("%d X %d = %d \n",n, i, n * i);
    }
    return 0;
}