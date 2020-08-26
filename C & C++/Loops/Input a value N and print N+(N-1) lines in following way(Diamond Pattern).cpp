/* Time Duration 40 minutes (2100-2140)
 * Input a value N and print N+(N-1) lines in following way.
 */

#include <stdio.h>

int main()
{
    int row,coloumn,n,mid;

    scanf("%d", &n);

    mid = n-1;

    for(row=0; row<2*n-1; row++)
    {
        for(coloumn=0; coloumn<2*n-1; coloumn++)
        {
            if(row<n)
            {
                if(row==mid)
                    printf("* ");
                else if(coloumn==mid)
                    printf("* ");
                else if(coloumn >= mid-row && coloumn <= mid+row)
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if(coloumn==mid)
                    printf("* ");
                else if(coloumn >= row-mid && coloumn < 2*n-1-row+mid)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }


    return 0;
}
