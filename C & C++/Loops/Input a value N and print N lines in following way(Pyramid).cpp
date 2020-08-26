/* Time Duration 17 minutes (1746-1803)
 * Input a value N and print N lines in following way.
 */

#include <stdio.h>

int main()
{
    int row,coloumn,n,i=0;

    scanf("%d", &n);

    for(row=0; row<n; row++)
    {
       for(coloumn=0; coloumn<n+i; coloumn++)
       {
           if(coloumn >= n-1-i)
            printf("* ");
           else
            printf("  ");
       }
       printf("\n");

       i++;
    }

    return 0;
}
