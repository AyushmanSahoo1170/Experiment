/*
WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive,
negative, odd, and even numbers in an array.
*/

#include <stdio.h>
int main()
{
    int num, i, positive = 0, negative = 0, zero = 0, even = 0, odd = 0;
    printf("Enter the number of the elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
        {
            positive++;
        }
        else if(arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    for(i = 0; i < num; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Positive = %d, Negative = %d, Zero = %d\n", positive, negative, zero);
    printf("Even = %d, Odd = %d\n", even, odd);
    return 0;
}