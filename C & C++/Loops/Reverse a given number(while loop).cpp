/* Time Duration 5 minutes (2045-2050)
 * Reverse a given number.
 */

 #include <stdio.h>

 int main()
{
    long int number1,number2=0;

    scanf("%ld", &number1);

    while(number > 0)
    {
        number2 = number2*10+number1%10;
        number1 = number1/10;
    }

    printf("%ld\n", number2);

    return 0;
}
