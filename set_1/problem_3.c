#include <stdio.h>

// ## Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).

int main()
{
    float C = 90;
    float F = (9.0 / 5.0) * C + 32;
    printf("C: %.2f = F: %.2f\n", C, F );
    
    return 0;
}