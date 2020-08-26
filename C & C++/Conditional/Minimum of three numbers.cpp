/* Time Duration 5 Minutes (1738-1743)
 * Write a C program to find a minimum between three numbers.
 */

#include <stdio.h>

int min(int numbera, int numberb)
    {
        return numbera<numberb?numbera:numberb;
    }

int main()
{
    int number1,number2,number3,minimum1,minimum;

    scanf("%d%d%d", &number1, &number2, &number3);

    minimum1 = min(number1,number2);

    minimum = min(minimum1,number3);

    printf("%d\n", minimum);

    return 0;
}
