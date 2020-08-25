/* Time Duration 3 minutes (0225-0227)
 * Count how many words are in the given input.
 */

#include <stdio.h>

int main()
{
    char str[250];
    int words=0,i=0;

    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            words++;
        i++;
    }

    printf("%d\n", words+1);

    return 0;
}
