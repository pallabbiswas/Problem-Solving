/* Time duration 7 minutes (2234-2240)
 * Given a character C.
 * Determine the character is an uppercase alphabet or lowercase alphabet or a digit.
 */

#include <stdio.h>

int main()
{
    char letter;

    scanf("%c", &letter);

    if(letter > 47 && letter < 59)
        printf("'%c' is a digit.\n", letter);
    else if(letter > 64 && letter < 91)
        printf("'%c' is uppercase alphabet.\n", letter);
    else if(letter > 96 && letter < 123)
        printf("'%c' is lowercase alphabet.\n", letter);
    else
        printf("'%c' is not an alphabet.\n", letter);

    return 0;
}
