/* Time Duration 6 minutes (0143-0149)
 * Write a program that merges two string into another string without using Concat function.
 */

#include <stdio.h>

int main()
{
    char str_a[50],str_b[50],str[100];
    int length_a=0,length_b=0,i;

    scanf("%s%s", str_a,str_b);

    while(str_a[length_a] != '\0')
        length_a++;

    while(str_b[length_b] != '\0')
        length_b++;

    for(i=0; i<length_a; i++)
        str[i] = str_a[i];
    for(i=0; i<length_b; i++)
        str[length_a+i] = str_b[i];

    str[length_a+i] = '\0';

    puts(str);

    return 0;
}
