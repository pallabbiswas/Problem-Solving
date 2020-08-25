/* Time Duration 6 minutes (2148-2154)
 * A bus can carry maximum K person at a time.
 * How many busses are needed to carry N person?
 */

#include <stdio.h>

int main()
{
    int capacity, person;

    scanf("%d%d", &person, &capacity);

    if(person%capacity == 0)
        printf("%d\n", person/capacity);
    else
        printf("%d\n", person/capacity + 1);

    return 0;
}
