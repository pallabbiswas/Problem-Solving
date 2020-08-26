/* Time Duration 10 minutes (2316-2326)
 * How to reverse a string without using any function.
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i,length=0;

    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    char r_str[length+1];

    for(i=0; i<length; i++)
    {
        r_str[length-1-i] = str[i];
    }

    r_str[length] = '\0';

    printf("%s\n", r_str);

    return 0;
}
