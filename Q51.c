/*
Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values
of both the pointers and the variables they point to.
*/

#include <stdio.h>
int main()
{
    int x = 10, *p1;
    float y = 10.5, *p2;
    char z = 'A', *p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;
    printf("Value of x : %d\n", x);
    printf("Address of x : %d\n", &x);
    printf("Address of x : %d\n", p1);
    printf("Value of x : %d\n", *p1);
    printf("Value of y : %f\n", y);
    printf("Address of y : %d\n", &y);
    printf("Address of y : %d\n", p2);
    printf("Value of y : %f\n", *p2);
    printf("Value of z : %c\n", z);
    printf("Address of z : %d\n", &z);
    printf("Address of z : %d\n", p3);
    printf("Value of z : %c\n", *p3);
    return 0;
}