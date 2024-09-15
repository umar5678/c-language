// 4. Write a function and pass the value by reference.

#include <stdio.h>
int new_func(int *n);
int main()
{
    int r = 15;
printf("Reference of r %p \n", &r );

    new_func(&r);

    return 0;
}

int new_func(int * n)
{
    printf("Refference %p \n", n );
    
}