/* Time Duration 3 minutes (2050-2053)
 * Input an integer N. Revrese the integer N.
 */

 #include <stdio.h>

 int main()
{
    long int number1,number2=0;

    scanf("%ld", &number1);

    while(number1 > 0)
    {
        number2 = number2*10+number1%10;
        number1 = number1/10;
    }

    printf("%ld\n", number2);

    return 0;
}
