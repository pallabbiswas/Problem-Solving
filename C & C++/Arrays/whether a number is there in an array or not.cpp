/* Time Duration 12 minutes (1824-1836)
 * Write a program to find whether a number is there in an array or not.
 */

#include <stdio.h>

int main()
{
    int size_arr,i,number,flag = -1;

    scanf("%d", &size_arr);

    int arr[size_arr];

    for(i=0; i<size_arr; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &number);

    for(i=0; i<size_arr; i++)
    {
        if(arr[i] == number)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("The number is in the array.\n");
    else
        printf("The number is not in the array.\n");

    return 0;
}
