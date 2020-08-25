/* Time Duration 5 minutes (1738-1743)
 * Input a value N and print N lines in following way.
 */

#include <stdio.h>

int main()
{
    int row,coloumn,n;

    scanf("%d", &n);

    for(row=0; row<n; row++)
    {
        for(coloumn=0; coloumn<n; coloumn++)
        {
            if(row+coloumn >= n-1)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
