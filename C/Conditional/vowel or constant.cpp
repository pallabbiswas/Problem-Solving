/* Time Duration 15 minutes (2241-2256)
 * Given a character C.
 *  Determine the character is a vowel or consonant.
 */

#include <stdio.h>

int main()
{
    char letter,temp;

    scanf("%c", &letter);

    if(letter < 97)
        temp = letter + 32;
    else
        temp = letter;

    if(temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u')
        printf("%c is a vowel.\n", letter);
    else
        printf("%c is a constant.\n", letter);


    return 0;
}
