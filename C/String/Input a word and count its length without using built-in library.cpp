/* Time Duration 5 minutes (2244-2249)
 * Input a word and count its length without using built-in library.
 */

#include <stdio.h>

int main()
{
    char str[100];
    int length=0;

    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    printf("%d\n", length);

    return 0;
}
