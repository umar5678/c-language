// . Write a program containing functions which counts the number of positive
// integers in an array.

#include <stdio.h>

int countPositiveNumbers(int arr[], int size)
{
    int count = 0;
    for (int c = 0; c < size; c++)
    {
        if(arr[c] > 0){
            count++;
        }
    }
    printf("The +ve ints in this arr: %d \n", count );
    
    return count;
    
}

int main()
{
    int wholeNumbers[] = {22, -3, 57, -78, -2, 9};
    int size = sizeof(wholeNumbers) / sizeof(wholeNumbers[0]);
    countPositiveNumbers(wholeNumbers, size);
   
    return 0;
}