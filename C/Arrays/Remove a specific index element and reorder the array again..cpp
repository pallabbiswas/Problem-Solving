/* Time Duration 7 minutes (2057-2104)
 * Given an array.
 * Remove a specific index element and reorder the array again.
 */

#include <stdio.h>

int main()
{
    int size_a,index,i;

    scanf("%d", &size_a);

    int arr[size_a];

    for(i=0; i<size_a; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &index);

    for(i=index; i<size_a-1; i++)
    {
        arr[i] = arr[i+1];
    }

    for(i=0; i<size_a-1; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
