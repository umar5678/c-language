// 3. Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main()
{
    int table_5[10];

    for (int q = 1; q < 11; q++)
    {
        table_5[q] = 5 * q;
    }

    for (int x = 1; x < 11; x++)
    {
        printf("%d \n",table_5[x]);

    }

        return 0;
}