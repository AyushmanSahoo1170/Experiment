/*
Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to
generate the Fibonacci sequence up to num.
*/

#include <stdio.h>
int fibo_recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo_recursive(n - 1) + fibo_recursive(n - 2);
    }
}
int main()
{
    int num;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printf("Fibonacci sequence up to %d terms (using recursion):\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibo_recursive(i));
    }
    return 0;
}