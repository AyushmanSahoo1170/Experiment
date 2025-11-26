/*
WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, 
equilateral, right angle, or scalene. Take sides of the triangle as input from a user.
*/

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle : \n");
    printf("Side 1 : ");
    scanf("%d", &side1);
    printf("Side 2 : ");
    scanf("%d", &side2);
    printf("Side 3 : ");
    scanf("%d", &side3);
    if(side1 > 0 && side2 > 0 && side3 > 0 && (side1 + side2) > side3 && (side1 + side3) > side2 && (side3 + side2) > side1)
    {
        if(side1 == side2 && side2 == side3 && side3 == side1)
        {
            printf("It is an Equilateral Triangle\n");
        }
        else if(side1 == side2 || side2 == side3 || side1 == side3)
        {
            printf("It is an Isosceles Triangle\n");
        }
        else if((side1 * side1 + side2 * side2 == side3 * side3) || 
                (side1 * side1 + side3 * side3 == side2 * side2) || 
                (side3 * side3 + side2 * side2 == side1 * side1))
        {
            printf("It is a Right Angled Triangle\n");
        }
        else
        {
            printf("It is a Scalene Triangle\n");
        }
    }
    else
    {
        printf("It is not a valid Triangle");
    }
    return 0;
}