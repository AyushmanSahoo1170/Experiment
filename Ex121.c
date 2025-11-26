/*
WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
*/

#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("Enter length and breadth of the rectangle:\n");
    printf("Length = ");
    scanf("%f", &length);
    printf("Breadth = ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2.0 * (length + breadth);
    printf("Area = %f, Perimeter = %f", area, perimeter);
    return 0;
}