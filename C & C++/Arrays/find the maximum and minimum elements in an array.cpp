/* Time Duration 5 minutes (1837-1842)
 * Write a program in C to find the maximum and minimum elements in an array.
 */

#include <stdio.h>

int main()
{
    int size_arr,i,minimum,maximum;

    scanf("%d", &size_arr);

    int arr[size_arr];

    for(i=0; i<size_arr; i++)
        scanf("%d", &arr[i]);

    minimum = maximum = arr[0];

    for(i=1; i<size_arr; i++)
    {
        if(arr[i] < minimum)
            minimum = arr[i];
        if(arr[i] > maximum)
            maximum = arr[i];
    }

    printf("%d\n%d\n", maximum, minimum);

    return 0;
}

