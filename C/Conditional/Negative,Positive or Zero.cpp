/* Time Duration 4 Minutes (1746-1749)
 * Write a C program to check whether a number is negative, positive, or zero.
 */

#include <stdio.h>

int main()
{
    long int number;

    scanf("%ld", &number);

    if(number==0)
        printf("0\n");
    else if(number<0)
        printf("negative number.\n");
    else
        printf("positive number.\n");

    return 0;
}
