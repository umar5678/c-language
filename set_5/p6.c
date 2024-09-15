// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int sum_natural(int n);

int main()
{
    int first_n_nums = 2;
    int sum = sum_natural(first_n_nums);
printf("Sum is %d \n", sum );

    return 0;
}

int sum_natural(int n)
{
    if(n == 1){
        return n;
    }
    return n + sum_natural(n - 1);
}