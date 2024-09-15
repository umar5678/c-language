// . If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i)
// True.
// (ii)
// False. answer
// (iii)
// Depends.

// *(S + 3) will be the 4th value that is incorrect

int main()
{
    int nums[] = {10, 11, 20, 21, 30, 31, 40, 41, 50, 51};
    int size = sizeof(nums) / sizeof(nums[0]);

    int *ptr = &nums;

    printf("Size of this array %d \n", size);
    printf("Pointer pointing to the first element %u \n", ptr);
    printf("1st Value at pointer ptr is %d \n", *ptr);
    printf("2nd Value at pointer ptr is %d \n", *(ptr + 1));
    printf("3rd Value at pointer ptr is %d \n", *(ptr + 2));

    return 0;
}