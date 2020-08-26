/* Time Duration 14 minutes (1843-1857)
 * Given an array. Insert a new value in a specific index and reorder the array again.
 */

#include <stdio.h>

int main()
{
    int size_a, index, number, i, temp;

    scanf("%d", &size_a);

    int arr[size_a+1];

    for(i=0; i<size_a; i++)
        scanf("%d", &arr[i]);

    scanf("%d%d", &index, &number);

    for(i=index; i<size_a+1; i++)
    {
        temp = arr[i];
        arr[i] = number;
        number = temp;
    }

    for(i=0; i<size_a+1; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

