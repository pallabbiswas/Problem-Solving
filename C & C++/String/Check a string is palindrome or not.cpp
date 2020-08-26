/* Time Duration 11 minutes (0129-0140)
 * Check a string is palindrome or not.
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i=0,mid,length=0,flag=1;

    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    if(length%2==0)
        mid = length/2-1;
    else
        mid = length/2;

    for(i=0; i<=mid; i++)
    {
        if(str[i] != str[length-1-i])
        {
            flag = 0;
            break;
        }
    }

    if(flag==1)
        printf("Yes it's palindrome.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}
