/* Time Duration 10 Minutes (2121-2131)
 * Write a program that calculates the summation of all rich numbers of an array
 * A rich number is a number that is greater than all the previous elements.
 */

#include <stdio.h>

int main()
{
    int size_a,i,temp=0,sum=0;

    scanf("%d", &size_a);

    int arr[size_a];

    for(i=0; i<size_a; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<size_a; i++)
    {
        if(arr[i] > temp)
        {
            sum += arr[i];
            temp = arr[i];
        }
    }

    printf("%d\n", sum);

    return 0;
}
