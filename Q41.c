/*
Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACTNo = 1, if n = 0.
Otherwise, FACTNo = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the
results for different values of n and r with suitable messages.
*/

#include <stdio.h>
int fact_recursive(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact_recursive(n - 1);
    }
}
int fact_non_recursive(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of r : ");
    scanf("%d", &r);
    if (r > n || n < 0 || r < 0)
    {
        printf("Invalid input. Ensure that n >= r and both are non-negative.\n");
        return 1;
    }
    int binomial_recursive = fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
    int binomial_non_recursive = fact_non_recursive(n) / (fact_non_recursive(r) * fact_non_recursive(n - r));
    printf("Using Recursive Factorial : \n");
    printf("C(%d, %d) = %d\n", n, r, binomial_recursive);
    printf("Using Non-Recursive Factorial : \n");
    printf("C(%d, %d) = %d\n", n, r, binomial_non_recursive);
    return 0;
}