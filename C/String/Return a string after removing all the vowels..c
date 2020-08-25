/* Time Duration 11 minutes (0152-0203)
 * Return a string after removing all the vowels.
 */

#include <stdio.h>

int main()
{
    char str[100];
    int i,j=0,length=0;

    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    for(i=0; i<length; i++)
    {
        if(str[i] == 'a' || str[i] == 'A' ||
           str[i] == 'e' || str[i] == 'E' ||
           str[i] == 'i' || str[i] == 'I' ||
           str[i] == 'o' || str[i] == 'O' ||
           str[i] == 'u' || str[i] == 'U' )
           continue;
        else
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    puts(str);

    return 0;
}
