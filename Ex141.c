/*
WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.
*/

#include <stdio.h>
int main()
{
    int num, positive = 0, negative = 0, zero = 0;
    char choice = 'y';
    printf("Enter any number : \n");
    while(choice == 'y' || choice == 'Y')
    {
        scanf("%d", &num);
        if(num > 0)
        {
            positive++;
        }
        else if(num < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
        printf("Do you want to continue? (Y/N)");
        scanf(" %c", &choice);
    }
    printf("Number of Postive numbers : %d\n", positive);
    printf("Number of Negative numbers : %d\n", negative);
    printf("Number of Zeroes : %d", zero);
    return 0;
}