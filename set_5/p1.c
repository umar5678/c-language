// Write a program using function to find average of three numbers.

#include <stdio.h>

float avg_of_3(int a, int b, int c);

int main()
{
    int num_1 = 23;
    int num_2 = 62;
    int num_3 = 199;

    float avg =  avg_of_3(num_1, num_2, num_3);
 
    printf("The Avg is %f \n", avg );
    

    return 0;
}

float avg_of_3(int a, int b, int c)
{
    return (a + b + c) / 3;
}