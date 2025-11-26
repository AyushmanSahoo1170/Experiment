/* 
Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the 
reverse of a given string.
*/

#include<stdio.h>
#include<string.h>  
void reverse(char str[])  
{  
    int n = strlen(str);  
    for (int i = 0; i < (n / 2); i++)
    {  
        char temp = str[i];  
        str[i] = str[n - i - 1];  
        str[n - i - 1] = temp;  
    }  
}
int main()
{  
    char str[100];  
    printf("Enter a string : ");  
    fgets(str, sizeof(str), stdin);  
    str[strcspn(str, "\n")] = 0;
    reverse(str);  
    printf("Reversed string : %s\n", str);  
    return 0;  
}