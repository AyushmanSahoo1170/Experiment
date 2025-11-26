/*
WAP to generate the following set of output.
b.     1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
*/

#include <stdio.h>
int main()
{
    int i, j, c;
    for(i = 0; i < 5; i++) 
    {
        for(j = 1; j <= 5 - i; j++) 
        {
            printf(" ");
        }
        c = 1;
        for(j = 0; j <= i; j++) 
        {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}