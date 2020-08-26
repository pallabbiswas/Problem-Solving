/* Time Duration 7 Minutes (1701-1708)
 * Take an input N. In the next line input N integers.
 * Print this N integers in separate lines.
 */

#include <stdio.h>

int main()
{
    int number,i;

    scanf("%d", &number);

    int arr[number];

    for(i=0; i<number; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<number; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
