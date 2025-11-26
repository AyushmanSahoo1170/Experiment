/*
Declare a static local variable inside a function. Observe how its value persists across function calls.
*/

#include <stdio.h>
void staticLocalExample()
{
    int staticVar = 0;
    staticVar++;
    printf("Static local variable value: %d\n", staticVar);
}
int main()
{
    staticLocalExample();
    staticLocalExample();
    staticLocalExample();
    return 0;
}