#include <stdio.h>

// Write a program to check whether a number is divisible by 97 or not.

int main()
{
    int num = 19;
    int ans;
    if (97 % num == 0)
    {
        ans = 1;
    }
    else
    {
        ans = 0;
    }

    printf("%d \n", ans );
    

    return 0;
}