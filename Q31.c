/*
WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest
integer in a list of integers.
*/

#include <stdio.h>
int main()
{
    int i, num, first = 0, second = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    if(num < 2)
    {
        printf("The array must have at least two elements to find the second largest element. \n");
        return 1;
    }
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > first)
        {
            first = arr[i];
        }
    }
    for(i = 0; i < num; i++)
    {
        if(arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }
    printf("The second largest element in the array is : %d\n", second);
    return 0;
}