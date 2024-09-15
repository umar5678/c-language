// 1. Write a program to print the address of a variable.Use this address to get the value of the variable.

#include <stdio.h>

int main()
{
    int a = 33;
    int *b = &a; // pointer pointing to the address of a

// get address
    printf("Address of a is %u \n", &a );
    printf("B storing the address of a %u \n", b );

// get value

printf("Value of a is %d \n", a );
printf("Value at address of pointer b is holding: %d \n", *b );
printf("Value at a %d \n", *(&a) );



    
    



    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr; // ptr is a pointer to the first element of the array

//     printf("Address of arr[0]: %u\n", (void *)ptr);
//     printf("Value at arr[0]: %u\n", *ptr); // Value of arr[0]

//     ptr++; // Increment pointer (moves to arr[1], NOT arr[0] + 1 byte)

//     printf("Address of arr[1]: %u\n", (void *)ptr);
//     printf("Value at arr[1]: %u\n", *ptr); // Value of arr[1]

//     return 0;
// }
