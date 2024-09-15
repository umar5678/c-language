// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.


#include <stdio.h>


int main()
{
    int sub1, sub2, sub3;
    printf("Enter Subject 1 marks: \n" );
    scanf("%d", &sub1);

    printf("Enter Subject 2 marks: \n" );
    scanf("%d", &sub2);

    printf("Enter Subject 3 marks: \n" );
    scanf("%d", &sub3);

    if(sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("You failed in individual subject \n" );
        return 0;
    }
    else if((sub1 + sub2 + sub3) / 3 < 40) 
    {
        printf("You failed due to less marks aggrigate \n" );
        return 0;
        }
        else{
            printf("Congrats! You passed \n" );
            
        }
    
    return 0;
}