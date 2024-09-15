#include <stdio.h>


// ## Write a C program to calculate area of a rectangle:
// - a. Using hard coded inputs.


// int main()
// {
//     int length = 4;
//     int width = 7;

//     int area_of_rectangle = length * width;

//     printf("The area of a rectangle of lenght %d and width %d is %d\n", length, width, area_of_rectangle);
// }

// - b. Using inputs supplied by the user.

int main()
{
    int length;
    int width;

    printf("Enter The Length: ");
    scanf("%d", &length);
    printf("Enter The Width: ");
    scanf("%d", &width);


    int area_of_rectangle = length * width;

    printf("The area of a rectangle of lenght %d and width %d is %d\n", length, width, area_of_rectangle);
}