/*Time duration 13 Minutes (1300-1313)
 *Write a C program that takes three valid side lengths of a triangle as input.
 *You must take inputs at integer data type.
 *Print the area of that triangle with three digits after decimal point.
 *Do typecasting if necessary.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int side_x,side_y,side_z;
    double average,area;

    scanf("%d%d%d", &side_x, &side_y, &side_z);

    average =(side_x + side_y + side_z)/2.0;

    area = sqrt(average*
               (average - side_x)*
               (average - side_y)*
               (average - side_z));

    printf("%.3lf\n", area);

    return 0;
}
