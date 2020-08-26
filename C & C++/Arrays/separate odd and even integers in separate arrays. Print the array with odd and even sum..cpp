/* Time Duration 26 minutes (1756-1822)
 * Write a program in C to separate odd and even integers in separate arrays.
 * Print the array with odd and even sum.
 */

#include <stdio.h>

int main()
{
    int size_arr, sum_odd=0, sum_even=0,i,j=0,k=0;

    scanf("%d", &size_arr);

    int main[size_arr],even[size_arr],odd[size_arr];

    for(i=0; i<size_arr; i++)
        scanf("%d", &main[i]);

    for(i=0; i<size_arr; i++)
    {
        if(main[i]%2 == 0)
        {
            even[j] = main[i];
            j++;
            sum_even += main[i];
        }
        else
        {
            odd[k] = main[i];
            k++;
            sum_odd += main[i];
        }
    }

    for(i=0; i<j; i++)
        printf("%d ", even[i]);
    printf("\n%d\n", sum_even);

    for(i=0; i<k; i++)
        printf("%d ", odd[i]);
    printf("\n%d\n", sum_odd);

    return 0;
}

