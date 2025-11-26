/*
WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a
particular number in a list of integers.
*/

#include <stdio.h>
int main()
{
    int n, i, num, count = 0;
    printf("Enter the number of the elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its frequency in the array : ");
    scanf("%d", &n);
    for(i = 0; i < num; i++) 
    {
        if(arr[i] == n) 
        {
            count++;
        }
    }
    printf("Frequency of %d in the array is: %d\n", n, count);
    return 0;
}