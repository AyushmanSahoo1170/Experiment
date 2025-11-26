/*
Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses
change and the effects on data access.
*/

#include <stdio.h>
int main()
{
    int x = 10, *p1;
    float y = 3.14, *p2;
    char z = 'a', *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;
    printf("Value of x is : %d\n", *p1);
    printf("Original address of x is : %d\n", p1);
    p1++;
    printf("Value of x is : %d\n", x);
    printf("Incremented address of x is : %d\n", p1);
    p1--;
    printf("Value of x is : %d\n", x);
    printf("Decremented address of x is : %d\n", p1);
    printf("Value of y is : %f\n", y);
    printf("Original address of y is : %d\n", p2);
    p2++;
    printf("Value of y is : %f\n", y);
    printf("Incremented address of y is : %d\n", p2);
    p2--;
    printf("Value of y is : %f\n", y);
    printf("Decremented address of y is : %d\n", p2);
    printf("Value of z is : %c\n", z);
    printf("Original address of z is : %d\n", p3);
    p3++;
    printf("Value of z is : %c\n", z);
    printf("Incremented address of z is : %d\n", p3);
    p3--;
    printf("Value of z is : %c\n", z);
    printf("Decremented address of z is : %d\n", p3);
    return 0;
}