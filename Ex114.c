/*
Write a C program to add two numbers, take number from user.
*/

#include <stdio.h>
int main() 
{
    int num1, num2, sum;
    printf("Enter two numbers to add them : \n");
    printf("Number 1 : ");
    scanf("%d",&num1);
    printf("Number 2 : ");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("Sum of the two number %d + %d is : %d \n", num1, num2, sum);
    return 0;
}