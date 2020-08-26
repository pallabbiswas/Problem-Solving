/* Time Duration 3 minutes (2254-2257)
 * Write a program in C to separate the individual characters from a string.
 */

#include <stdio.h>

int main()
{
    char word[100];
    int i=0;

    scanf("%s", word);

    while(word[i] != '\0')
    {
        printf("%c ", word[i]);
        i++;
    }

    printf("\n");

    return 0;
}
