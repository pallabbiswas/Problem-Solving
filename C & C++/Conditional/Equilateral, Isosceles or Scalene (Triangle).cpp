/* Time Duration 3 Minutes (2130-2133)
 * Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.
 */

#include <stdio.h>

int main()
{
    int sideA,sideB,sideC;

    scanf("%d%d%d", &sideA, &sideB, &sideC);

    if(sideA==sideB && sideB==sideC)
        printf("This is an equilateral triangle.\n");
    else if(sideA!=sideB && sideB!=sideC && sideA !=sideC)
        printf("This is a scalene triangle.\n");
    else
        printf("This is an isosceles triangle.\n");

    return 0;
}
