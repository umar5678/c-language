// 2. Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float C_to_F(float C);

int main()
{
    float C = 37.0;
    float F = C_to_F(C);

    printf("%.2f C = %.2f F \n", C, F );
    

    return 0;
}

float C_to_F(float C)
{
    return (9.0 / 5.0) * C + 32.0;
}