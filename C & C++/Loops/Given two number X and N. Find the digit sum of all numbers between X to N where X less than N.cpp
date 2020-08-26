/* Time Duration 13 minutes (2148-2200)
 * Given two number X and N.
 * Find the digit sum of all numbers between X to N where X<=N.
 */

#include <stdio.h>

int main()
{
    int x,n,i;
    long int sum=0;

    scanf("%d%d", &x,&n);

    for(i=x; i<=n; i++)
    {
        x=i;
        while(x!=0)
        {
            sum += x%10;
            x = x/10;
        }
    }

    printf("%ld\n", sum);

    return 0;
}
