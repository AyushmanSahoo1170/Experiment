/*
Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside
those blocks.
*/

#include <stdio.h>
int main() 
{
    for(int i = 0; i < 3; i++) 
    {
        int loopVar = i * 10;
        printf("Loop variable value inside loop: %d\n", loopVar);
    }
    //printf("Loop variable value outside block: %d\n", blockVar);  //This will cause a compilation error
    return 0;
}