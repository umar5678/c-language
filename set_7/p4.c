// 4. Repeat problem 3 for a general input provided by the user using scanf.

#include <stdio.h>

int main()
{
    int table_5[10];
    int n = 0;

    printf("Enter a Number: " );
    scanf("%d", &n);

    for (int q = 0; q <= 10; q++)
    {
        table_5[q] = n * (q + 1);
    }

    for (int x = 1; x <= 10; x++)
    {
        printf("%d \n", table_5[x]);
    }

    return 0;
}