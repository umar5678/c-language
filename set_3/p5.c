// Write a program to determine whether a character entered by the user is
// lowercase or not.

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z')
    {
        printf("'%c' is a lowercase \n", c );
        
    }
    else{
        printf("'%c' is not lowercase \n", c );
        
    }
    return 0;
}