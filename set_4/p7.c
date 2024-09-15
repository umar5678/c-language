// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.(consider 8 x 1 to 8 x 10)

#include <stdio.h>

int main()
{
        int n = 8;
        int sum = 0;
        for (int b = 1; b <= 10; b++)
        {
                sum += b * n;
        }
        printf("%d \n", sum);

        return 0;
}