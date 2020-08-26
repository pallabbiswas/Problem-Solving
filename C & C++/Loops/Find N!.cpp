/* Time Duration 4 minutes (2024-2028)
 * Given N. Find N!.
 */

#include <stdio.h>

int main()
{
    long long number,i,multiple=1;

    scanf("%lld", &number);

    for(i=1; i<=number; i++)
    {
        multiple *= i;
    }

    printf("%lld\n", multiple);

    return 0;
}
