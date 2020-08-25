/* Time Duration 3 minutes (2358-2401)
 * Input a string that will contain only uppercase letters.
 * Convert these letters in lowercase.
 */

#include <stdio.h>

int main()
{
    char str[250];
    int i=0;

    scanf("%s", str);

    while(str[i] != '\0')
        {
            str[i] += 32;
            i++;
        }

    puts(str);

    return 0;
}
