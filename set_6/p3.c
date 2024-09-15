// 3. Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>

int change_by_10(int *n)
{
    return *n *= 10;
}

int main()
{
    int q = 10;
    printf(" Value of q is %d\n", q);
    change_by_10(&q);
    printf("New Value of q is %d \n", q);

    return 0;
}