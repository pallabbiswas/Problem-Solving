/* Time Duration 5 minutes (2115-2120)
 * Given a number N, find smallest number
 * which is  dividible by 3 and greater than N.
 */

 #include <stdio.h>

 int main()
{
    int number;

    scanf("%d", &number);

    number++;

    while(number%3 != 0)
    {
        number++;
    }

    printf("%d\n", number);

    return 0;
}

