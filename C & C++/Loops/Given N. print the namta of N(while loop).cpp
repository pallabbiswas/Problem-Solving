/* Time Duration 3 minutes (2043-2045)
 * Given N. print the "namta" of N.
 */

#include <stdio.h>

int main()
{
    int number,i;

    scanf("%d", &number);

    i = 1;

    while(i<=10)
    {
        printf("%d X %d = %d\n", number,i,number*i);
        i++;
    }

    return 0;
}
