/*
Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within
the function.
*/

#include <stdio.h>
int sum(int *c1, int *c2)
{
    int s;
    s = *c1 + *c2;
    (*c1)++;
    (*c2)++;
    return s;
}
int main()
{
    int x = 10, y = 20, *p1, *p2, first_sum, second_sum;
    p1 = &x;
    p2 = &y;
    printf("The original value of x and y is : %d %d\n", x, y);
    first_sum = sum(p1, p2);
    printf("The original sum is : %d\n", first_sum);
    printf("The modified value of x and y is : %d %d\n", x, y);
    second_sum = sum(p1, p2);
    printf("The modified sum is : %d", second_sum);
    return 0;
}