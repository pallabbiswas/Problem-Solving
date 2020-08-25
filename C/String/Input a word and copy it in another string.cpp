/* Time Duration 5 minutes (2309-2314)
 * Input a word and copy it in another string.
 */

#include <stdio.h>

int main()
{
    char word_a[100], word_b[100];
    int i=0;

    scanf("%s", word_a);


    while(word_a[i] != '\0')
    {
        word_b[i] = word_a[i];
        i++;
    }

    word_b[i] = '\0';

    printf("%s\n", word_b);

    return 0;
}
