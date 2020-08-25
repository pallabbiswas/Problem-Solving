/* Time Duration 18 minutes (0205-0223)
 * Write a program in C to find the maximum occurring character in a string.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    char str[100];
    int length=0,i,j,maximum = INT_MIN,index=0;

    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    int arr[length] = {0};

    for(i=0; i<length; i++)
    {
        for(j=i; j<length; j++)
        {
            if(str[i] == str[j])
                arr[i]++;
        }

        if(maximum < arr[i])
        {
            maximum = arr[i];
            index = i;
        }

    }

    printf("%c\n", str[index]);


    return 0;
}
