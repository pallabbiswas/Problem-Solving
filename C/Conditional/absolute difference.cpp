/* Time Duration 4 minutes (2143-2146)
 * Find the absolute difference between the two numbers.
 */

#include <stdio.h>

int main()
{
    int number1,number2;

    scanf("%d%d", &number1, &number2);

    if(number1 == number2)
        printf("0\n");
    else if(number1 < number2)
        printf("%d\n", number2-number1);
    else
        printf("%d\n", number1-number2);

    return 0;
}
