/* Time Duration 13 minutes (1730-1743)
 * Given a list of numbers. Save the numbers in an Array.
 * Finally, reverse the array elements and output in a line separated by space.
 */

#include <stdio.h>

int main()
{
    int size_arr,i,mid,temp;

    scanf("%d", &size_arr);

    int arr[size_arr];

    for(i=0; i<size_arr; i++)
            scanf("%d", &arr[i]);

    if(size_arr%2 == 1)
        mid = size_arr/2;
    else
        mid = size_arr/2-1;

    for(i=0; i<=mid; i++)
    {
        temp = arr[i];
        arr[i] = arr[size_arr-1-i];
        arr[size_arr-1-i] = temp;
    }

    for(i=0; i<size_arr; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

