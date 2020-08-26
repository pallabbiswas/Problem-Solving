/* Time duration 23 minutes (2158-2221)
 * Given the coordinate of two points p1(x1,y1) and p2(x2,y2).
 * Find which point is closest to the center (0,0).
 */

#include <stdio.h>

int main()
{
    long int pointA1,pointA2,pointB1,pointB2,distanceA,distanceB;

    scanf("%ld%ld%ld%ld", &pointA1, &pointA2, &pointB1, &pointB2);

    distanceA = pointA1*pointA1+pointA2*pointA2;
    distanceB = pointB1*pointB1+pointB2*pointB2;

    if(distanceA==distanceB)
        printf("Same distance\n");
    else if(distanceA < distanceB)
        printf("%ld %ld", pointA1,pointA2);
    else
        printf("%ld %ld", pointB1,pointB2);

    return 0;
}
