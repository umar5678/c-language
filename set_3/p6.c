// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    int nums[4];
    int max = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter a Number: \n");
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < 4; j++)
    {
        if (nums[j] > max)
        {
            max = nums[j];
        }
    }

    printf("The greatest number is %d \n", max);

    return 0;
}