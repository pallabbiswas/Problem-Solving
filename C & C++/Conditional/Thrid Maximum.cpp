/* Time Duration 35 Minutes (1806-1841)
 * Write a C program to find the third maximum between four numbers.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    long int minimum=INT_MAX,output=INT_MAX,i,number[4];

   for(i=0; i<4; i++)
   {
       scanf("%ld",&number[i]);
       if(minimum > number[i])
            minimum = number[i];
   }

   for(i=0; i<4; i++)
   {
       if(number[i]-minimum != 0)
            {
                if(output>number[i])
                    output = number[i];
            }
   }

   printf("%ld\n",output);

    return 0;
}
