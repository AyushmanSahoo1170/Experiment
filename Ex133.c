/*
WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
*/

#include <stdio.h>
int main()
{
    float x1, x2, x3, y1, y2, y3;
    printf("Enter the coordinates of the points separeted by space: \n");
    printf("Coordinate of point 1 (x1,y1) respectively are :\n");
    scanf("%f %f", &x1, &y1);
    printf("Coordinate of point 2 (x2,y2) respectively are :\n");
    scanf("%f %f", &x2, &y2);
    printf("Coordinate of point 3 (x3,y3) respectively are :\n");
    scanf("%f %f", &x3, &y3);
    if(((y2-y1)/(x2-x1)) == ((y3-y2)/(x3-x2)))
    {
        printf("Points are collinear");
    }
    else
    {
        printf("Points are not collinear");
    }
    return 0;
}