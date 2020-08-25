/* Time Duration 7 minutes (1806-1813)
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
            if(coloumn < row)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
