/*
WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle 
has the highest perimeter. The minimum number of rectangles should be three.
*/

#include <stdio.h>
int main()
{
    float length1, breadth1, perimeter1, length2, breadth2, perimeter2, length3, breadth3, perimeter3, max_perimeter;
    printf("Enter length and breadth of rectangle 1 respectively : ");
    scanf("%f %f", &length1, &breadth1);
    printf("Enter length and breadth of rectangle 2 respectively : ");
    scanf("%f %f", &length2, &breadth2);
    printf("Enter length and breadth of rectangle 3 respectively : ");
    scanf("%f %f", &length3, &breadth3);
    perimeter1 = 2.0 * (length1 + breadth1);
    perimeter2 = 2.0 * (length2 + breadth2);
    perimeter3 = 2.0 * (length3 + breadth3);
    max_perimeter = (perimeter1 > perimeter2 && perimeter1 > perimeter3) ? perimeter1 : 
                    (perimeter2 > perimeter3 ? perimeter2 : perimeter3);
    if (max_perimeter == perimeter1) 
    {
        printf("Rectangle 1 has the highest perimeter: %f\n", perimeter1);
    }
    else if (max_perimeter == perimeter2) 
    {
        printf("Rectangle 2 has the highest perimeter: %f\n", perimeter2);
    } 
    else 
    {
        printf("Rectangle 3 has the highest perimeter: %f\n", perimeter3);
    }
    return 0;
}