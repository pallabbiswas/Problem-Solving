/* Time Duration 4 minutes (1721-1725)
 * Input N and M.
 * Print N lines where every line contains M stars.
 */

#include <stdio.h>

int main()
{
    int row,column,n,m;

    scanf("%d%d", &n, &m);

    for(row=0; row<n; row++)
    {
        for(column=0; column<m; column++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
