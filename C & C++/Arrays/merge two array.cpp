/* Time Duration 8 minutes (1745-1753)
 * Write a program in C to merge two arrays.
 */

#include <stdio.h>

int main()
{
    int size_A,size_B,size_C,i;

    scanf("%d", &size_A);

    int arr_A[size_A];

    for(i=0; i<size_A; i++)
        scanf("%d", &arr_A[i]);

    scanf("%d", &size_B);

    int arr_B[size_B];

    for(i=0; i<size_B; i++)
        scanf("%d", &arr_B[i]);

    size_C = size_A + size_B;

    int arr_C[size_C];

    for(i=0; i<size_A; i++)
        arr_C[i] = arr_A[i];
    for(i=size_A; i<size_C; i++)
        arr_C[i] = arr_B[i-size_A];

    for(i=0; i<size_C; i++)
        printf("%d ", arr_C[i]);

    printf("\n");

    return 0;
}

