/* Time Duration 8 minutes (2259-2307)
 * Input two words and check both words are the same or not.
 */

#include <stdio.h>

int main()
{
    char word_a[100],word_b[100];
    int i=0, j=0, k=0, flag = 1;

    scanf("%s%s", word_a, word_b);

    while(word_a[i] != '\0')
        i++;
    while(word_b[j] != '\0')
        j++;

    if(i != j)
        flag = 0;
    else
    {
        while(word_a[k] != '\0')
        {
            if(word_a[k] != word_b[k])
            {
                flag = 0;
                break;
            }
            k++;
        }
    }

    if(flag == 0)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
