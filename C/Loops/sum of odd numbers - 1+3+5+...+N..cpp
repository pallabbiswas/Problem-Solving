/* Time Duration 4 minutes (2005-2009)
 * Input an integer N.
 * Find the sum of odd numbers - 1+3+5+...+N.
 */

#include <stdio.h>

int main()
{
    int number,i,sum=0;

    scanf("%d", &number);

    for(i=1; i<=number; i+=2)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
