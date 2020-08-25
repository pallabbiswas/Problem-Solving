/* Time Duration 3 minutes (1732-1734)
 * Input a value N and print N lines in following way.
 */

#include <stdio.h>

int main()
{
    int row,coloumn,n;

    scanf("%d", &n);

    for(row=0; row<n; row++)
    {
        for(coloumn=0; coloumn<=row; coloumn++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
