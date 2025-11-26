/*   
Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write 
a C program that invokes this function to generate prime numbers between the given ranges.
*/

#include <stdio.h>
int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1; 
}
int main()
{
    int lower, upper, num;
    printf("Enter the lower range : ");
    scanf("%d", &lower);
    printf("Enter the upper range : ");
    scanf("%d", &upper);
    if (lower < 0 || upper < 0 || lower > upper)
    {
        printf("Invalid input. Ensure that 0 <= lower range <= upper range.\n");
        return 1;
    }
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (num = lower; num <= upper; num++)
    {
        if (is_prime(num))
        {
            printf("%d ", num);
        }
    }
    return 0;
}