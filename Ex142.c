/*
WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting. Num * 1 = Num
*/

#include <stdio.h>
int main()
{
    int num, i, product;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++) 
    {
        product = num * i;
        printf("%d * %d = %d\n", num, i, product);
    }
    return 0;
}