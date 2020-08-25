/* Time Duration 8 minutes (2122-2130)
 * Given N, find X and A where N = X*2^A.
 */

#include <stdio.h>

int main()
{
    int number,a=0;

    scanf("%d", &number);

    while(number%2 != 1)
    {
        a++;
        number/=2;
    }

    printf("%d %d\n", number,a);

    return 0;
}
