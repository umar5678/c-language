// 4. Write a program using recursion to calculate nth element of Fibonacci series.

// 0,1,1,2,3,5,8,13,21, 34 ...

#include <stdio.h>

int fibonacci(int);

int main()
{
    int n = 3;
    int fibo = fibonacci(n);

    printf("Fibonacci Number on %d place is %d \n", n, fibo );
    

    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}