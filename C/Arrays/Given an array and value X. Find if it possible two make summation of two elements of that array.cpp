/* Time Duration 15 minutes (2203-2218)
 * Given an array and value X.
 * Find if it possible two make summation of two elements of that array equal to X.
*  If possible print those two element otherwise print -1.
 */

#include <stdio.h>

int main()
{
    int arr_size,i,j,value,flag=0;

    scanf("%d%d", &arr_size,&value);

    int arr[arr_size];

    for(i=0; i<arr_size; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<arr_size; i++)
    {
        for(j=i+1; j<arr_size; j++)
        {
            if(arr[i]+arr[j] == value)
            {
                flag = 1;
                printf("%d %d, ", arr[i],arr[j]);
            }
        }
    }
    if(flag != 1)
        printf("-1");
    printf("\n");
    return 0;
}
