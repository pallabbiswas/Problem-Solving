/* Time Duration 5 Minutes (1759-1804)
 * Given two numbers N and X. Find N is divisible by X or not.
 */

#include <stdio.h>

int main()
{
    int dividend, divisor;

    scanf("%d%d", &dividend, &divisor);

    if(dividend%divisor == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
