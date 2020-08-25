/* Time Duration 3 minutes (2056-20)
 * Merge 2 numbers in another integer.
 */

 #include <stdio.h>
 #include <math.h>

 int main()
{
    long int number1,number2,number,i=0;

    scanf("%ld%ld", &number1,&number2);

    number = number2;

    while(number > 0)
    {
        i++;
        number = number/10;
    }

    number = powl(10,i);

    printf("%ld\n", number1*number+number2);

    return 0;
}

