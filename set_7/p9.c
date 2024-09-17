// 9. Create a three–dimensional array and print the address of its elements in
// increasing order.

#include <stdio.h>

int main()
{
    int arr[2][3][4];

    // Print addresses of elements in increasing order
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("arr[%d][%d][%d]: %p\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}