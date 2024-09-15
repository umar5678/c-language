#include <stdio.h>

// ## Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest

int main()
{
    int P = 300;
    int years = 1;
    float rate = 2.5;

    printf("The vlue of simple intrest: %.2f \n" , (P * years * rate) / 100);
    
    return 0;
}