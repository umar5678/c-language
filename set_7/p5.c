// .Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

int reverse(int arr[], int size);

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int e = 0; e < size; e++)
    {
        printf("%d \n", arr[e]);
    }
    reverse(arr, size);

    for (int e = 0; e < size; e++)
    {
        printf("%d \n", arr[e]);
    }

    return 0;
}

int reverse(int arr[], int size)
{
    int temp;
    

    for (int r = 0; r < size / 2; r++)
    {
        temp = arr[r];
       
       arr[r] = arr[size - r - 1];
       arr[size - r - 1] = temp;
    }

    for (int d = 0; d < size; d++)
    {
        printf("Reversed array %d \n", arr[d]);
    }
}

