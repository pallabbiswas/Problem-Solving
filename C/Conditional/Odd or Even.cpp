/* Time Duration 4 Minutes (1755-1758)
 * Write a C program to check whether a given integer is odd or even.
 */

#include <stdio.h>

int main()
{
    int number;

    scanf("%d", &number);

    if(number%2==0)
        printf("%d is an even integer\n", number);
    else
        printf("%d is an odd integer\n", number);

    return 0;
}
