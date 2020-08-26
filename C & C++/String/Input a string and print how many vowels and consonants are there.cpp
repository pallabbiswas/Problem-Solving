/* Time Duration  (2338-2349)
 * Input a string and print how many vowels and consonants are there.
 */

#include <stdio.h>

int main()
{
    char sent[250];
    int vowels=0,constants=0,i=0;

    gets(sent);

    while(sent[i] != '\0')
    {
        if(sent[i] > 90)
            sent[i] -= 32;
        if(sent[i] > 64 && sent[i] < 91)
        {
            if(sent[i] == 65 ||
               sent[i] == 69 ||
               sent[i] == 73 ||
               sent[i] == 79 ||
               sent[i] == 85 )
               vowels++;
            else
                constants++;
        }
        i++;
    }

    printf("Vowels : %d\nConsonets : %d\n", vowels, constants);

    return 0;
}
