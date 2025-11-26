/*
Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
*/

#include <stdio.h>
int globalVar = 100;
int num1 = 10;
int num2 = 20;
void displayGlobal()
{
    printf("Global variable value inside displayGlobal: %d\n", globalVar);
}
void sum()
{
    int sum = num1 + num2;
    printf("Sum of num1 and num2: %d\n", sum);
}
int main()
{
    printf("Global variable value inside main: %d\n", globalVar);
    displayGlobal();
    sum();
    return 0;
}