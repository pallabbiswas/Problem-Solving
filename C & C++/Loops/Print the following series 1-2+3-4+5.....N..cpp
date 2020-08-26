/* Time Duration  minutes (2012-20)
 * Input an integer N.
 * Print the following series: 1-2+3-4+5.....N.
 */

#include <stdio.h>

int main()
{
    int number,i;

    scanf("%d", &number);

    for(i=1; i<=number; i++)
    {
        if(i%2 == 1)
            printf("%d\n", sum);
        else
            printf("-%d\n", sum);
    }

    printf("\n", sum);

    return 0;
}
