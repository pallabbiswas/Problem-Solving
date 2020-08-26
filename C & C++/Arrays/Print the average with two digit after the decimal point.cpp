/* Time Duration 5 minutes (1711-1716)
 * Input N integers. Determine the average.
 * Print the average with two digit after the decimal point.
 */

#include <stdio.h>

int main()
{
    int number,i,sum=0;

    scanf("%d", &number);

    int arr[number];

    for(i=0; i<number; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%.2lf\n", 1.0*sum/number);

    return 0;
}
