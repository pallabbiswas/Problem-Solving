/* Time Duration 5 minutes (2141-2145)
 * Given an array, Find all possible pairs.
 */

#include <stdio.h>

int main()
{
    int array_size,i,j;

    scanf("%d", &array_size);

    int arr[array_size];

    for(i=0; i<array_size; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<array_size; i++)
    {
        for(j=0; j<array_size; j++)
            printf("%d %d, ", arr[i],arr[j]);
    }

    printf("\n");

    return 0;
}
