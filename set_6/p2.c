// 2. Write a program having a variable ‘i’.Print the address of ‘i’.Pass this variable to a function and print its address.Are these addresses same? Why?
// Different, because it s passed by value, it value is copied to the function argument
// it would be same if i pass its reference

// #include <stdio.h>

// int my_function(int *i);

// int main()
// {
//     int i = 22;
//     printf("Address of i is %u \n", &i );

//     my_function(i);

//     return 0;
// }

// int my_function(int *i)
// {
// printf("Address of i in function is %u \n", &i );

// }

#include <stdio.h>

int pass_func(int* ptr)
{
    printf("The value of ptr %u \n", ptr ); // the reference that it is holding 
    printf("The value at ptr %d \n", *ptr ); // value it is referencing to // dereferencing
    
    
}
int main()
{
    int i = 3;
    int *ptr = &i;
    printf("The address of i is %u \n", &i);
    printf("This pointer is holding the refference %u \n", ptr);
    printf("This is how to access the value inside pointer %u \n", *ptr); // dereference

    pass_func(ptr); // passing the reference

    return 0;
}