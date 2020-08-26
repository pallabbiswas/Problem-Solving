/* Time Duration 13 minutes (1841-1854)
 *  Input a value N and print N lines in following way
 */

#include <stdio.h>

int main()
{
    int row,coloumn,n,i=0;

    scanf("%d", &n);

    for(row=0; row<n; row++)
    {
       for(coloumn=0; coloumn<=2*(n-1); coloumn++)
       {
           if(coloumn >= row && coloumn <=2*(n-1)-row)
            printf("* ");
           else
            printf("  ");
       }
       printf("\n");

       i++;
    }

    return 0;
}
