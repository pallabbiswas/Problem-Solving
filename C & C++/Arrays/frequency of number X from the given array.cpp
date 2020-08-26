/* Time Duration 4 minutes (2149-2153)
 * Write a program to find the frequency of number X from the given array.
 */

#include <stdio.h>

int main()
{
    int size_a,number,freq=0,i;

    scanf("%d", &size_a);

    int arr[size_a];

    for(i=0; i<size_a; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &number);

    for(i=0; i<size_a; i++)
        if(arr[i] == number)
            freq++;

    printf("%d\n", freq);

    return 0;
}

