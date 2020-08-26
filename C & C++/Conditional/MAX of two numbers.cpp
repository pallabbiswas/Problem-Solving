/* Time Duration 5 Minutes (1731-1736)
 * Write a C program to find the maximum between two numbers.
 */

#include <stdio.h>

int main()
{
    int number1,number2,maximum;

    scanf("%d%d", &number1, &number2);

    maximum = number1>number2?number1:number2;

    printf("%d\n", maximum);

    return 0;
}
