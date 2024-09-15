// 7. Write a program using function to print the following pattern(first n lines)
// *
// ***
// *****

#include <stdio.h>

int print_stars(int n);

int main()
{
    int n = 0;
    printf("Enter a number: \n");
    scanf("%d", &n);

    print_stars(n);

    return 0;
}

int print_stars(int n)
{
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < 2 * a + 1; b++)
        {
            printf("*" );
            
        };
        printf(" \n" );
        
    }
}