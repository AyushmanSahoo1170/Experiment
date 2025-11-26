/*    
Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global
variable from within the function.
*/

#include <stdio.h>
int globalVar = 100;
void displayLocal()
{
    int localVar = 50;
    printf("Local variable value inside displayLocal: %d\n", localVar);
    printf("Global variable value inside displayLocal: %d\n", globalVar);
}
int main()
{
    //printf("Local variable value inside main: %d\n", localVar); // This will cause a compilation error
    printf("Global variable value inside main: %d\n", globalVar);
    displayLocal();
    return 0;
}