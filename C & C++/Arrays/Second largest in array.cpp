/* Time Duration 13 minutes (2134-2147)
 * Write a program in C to find the second largest element in an array.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    int size_a,large,s_large=INT_MIN,i;

    scanf("%d", &size_a);

    int arr[size_a];

    for(i=0; i<size_a; i++)
        scanf("%d", &arr[i]);

    large = arr[0];

    for(i=1; i<size_a; i++)
    {
        if(arr[i] > large)
        {
            s_large = large;
            large = arr[i];
        }
        else if(arr[i] > s_large && arr[i] != large)
            s_large = arr[i];
    }

    printf("%d\n", s_large);

    return 0;
}
