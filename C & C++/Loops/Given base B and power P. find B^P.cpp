/* Time Duration 4 minutes (2017-2021)
 * Given base B and power P. find B^P.
 */

#include <stdio.h>

int main()
{
    int number,i,sum=0;

    scanf("%d", &number);

    for(i=1; i<=number; i++)
    {
        if(i%2 == 1)
            sum+=i;
        else
            sum-=i;
    }

    printf("%d\n", sum);

    return 0;
}
