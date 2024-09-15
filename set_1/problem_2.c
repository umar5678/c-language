#include <stdio.h>

// ## Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

// int main()
// {
//     int radius_of_circle = 6;
//     float area_of_circle = 3.14 * (radius_of_circle * radius_of_circle);

//     printf("Area of Circle of radius: %d is %.4f \n", radius_of_circle , area_of_circle );
    
//     return 0;
// }



int main()
{
    int radius_of_cylender = 6;
    int height = 10;
    float volume_of_cylender = 3.14 * (radius_of_cylender * radius_of_cylender) * height;
    printf("The volume of cylender of height: %d and radius: %.4f is  \n", height, radius_of_cylender, volume_of_cylender );
    
    return 0;
}
