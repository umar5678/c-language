// 8. Repeat problem 7 for a custom input given by the user.

#include <stdio.h>

int main()
{
    int numbers[3];
    printf("Enter a Number: \n");
    scanf("%d", &numbers[0]);
    printf("Enter a Number: \n");
    scanf("%d", &numbers[1]);
    printf("Enter a Number: \n");
    scanf("%d", &numbers[2]);

    int arr[3][10];

    for (int r = 0; r < 3; r++)
    {
        for (int t = 0; t < 10; t++)
        {
            arr[r][t] = numbers[r] * (t + 1);
        }
    }

    for (int r = 0; r < 3; r++)
    {
        for (int t = 0; t < 10; t++)
        {
            printf("%d", arr[r][t]);
        }
        printf(" \n");
    }

    return 0;
}