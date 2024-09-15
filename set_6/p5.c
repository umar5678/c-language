// 5. Write a program using a function which calculates the sum and average of two numbers.Use pointers and print the values of sum and average in main().

// #include <stdio.h>

// int sum_func(int* a, int* b)
// {
//     return *a + *b;
// }

// int avg_func(int* a, int* b)
// {
//     return (*a + *b) / 2;
// }

// int main()
// {
//     int a = 4, b = 6, avg = 0, sum = 0;

//     sum = sum_func(&a, &b);
//     avg = avg_func(&a, &b);

//     printf("Sum is %d \n", sum);
//     printf("Avg is %d \n", avg);

//     return 0;
// }

#include <stdio.h>

int* sum_func(int a, int b) // a function that raturn a reference address
{
    int sum =  a + b;
    int* ptr = &sum;
    return ptr;
}

float* avg_func(int a, int b) // a function that raturn a reference address
{
    float avg = (a + b) / 2.0;
    float* ptr = &avg;
    return ptr;
}

int main()
{
    int a = 4, b = 6;

    int* sum;
    float* avg;

   sum = sum_func(a, b);
   avg = avg_func(a, b);

    printf("Sum is %d \n", sum);
    printf("Avg is %f \n", *avg);

    return 0;
}