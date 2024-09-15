// 7. Try problem 3 using call by value and verify that it does not change the value of the said variable.

#include <stdio.h>

int change_by_10(int n)
{
    return n *= 10;
}

int main()
{
    int q = 10;
    printf(" Value of q is %d\n", q);

    change_by_10(q);  // calling by value

    printf("New Value of q is %d \n", q); // value does not change

    return 0;
}