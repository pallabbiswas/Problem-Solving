/* Time Duration 27 minutes (2404-2431)
 * How to convert a string to an integer.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    char str[100];
    long int number=0,i=0,length=0;

    scanf("%s", str);

    while(str[length]!='\0')
        length++;
    while(str[i]!='\0')
    {
        number += (str[i] - '0')*powl(10,length-i-1);
        i++;
    }

    printf("%ld\n", number);

    return 0;
}
