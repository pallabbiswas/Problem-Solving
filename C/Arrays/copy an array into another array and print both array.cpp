/* Time Duration 7 minutes (1720-1727)
 * Write a program to copy an array into another array and print both array.
 */

#include <stdio.h>

int main()
{
    int size_arr,i;

    scanf("%d", &size_arr);

    int arrA[size_arr], arrB[size_arr];

    for(i=0; i<size_arr; i++)
    {
        scanf("%d", &arrA[i]);
    }

    for(i=0; i<size_arr; i++)
    {
        arrB[i] = arrA[i];
        printf("%d ", arrA[i]);
    }

    printf("\n");

    for(i=0; i<size_arr; i++)
    {
        printf("%d ", arrB[i]);
    }

    printf("\n");

    return 0;
}

