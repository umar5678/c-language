// 6. Write a program to print the value of a variable i by using “pointer to pointer” type of variable.
#include <stdio.h>

int main()
{
    int i = 45;
    int *ptr = &i;
    int **ptr2 = &ptr;

    printf("Value of i from the pointer to pointer is %d \n", **ptr2 );
    
    return 0;
}