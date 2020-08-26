/* Time Duration 10 minutes (0117-0127)
 * Input a string and print how many alphabets, digit,
 * and special characters are there.
 */

#include <stdio.h>

int main()
{
    char str[250];
    int i=0,digit=0,special=0,alphabet=0;

    gets(str);

    while(str[i] != '\0')
    {
        if('0' <= str[i] && str[i] <= '9')
            digit++;
        else if(('a'<=str[i] && str[i]<='z')||('A' <= str[i] && str[i] <= 'Z'))
            alphabet++;
        else
        special++;

        i++;
    }

    printf("Alphabet : %d\nDigit : %d\nSpecial: %d\n", alphabet,digit,special);

    return 0;
}
