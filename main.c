#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("      ##### Welcome to the POWER CACULATOR ####\n");
    
    int number  , z , i ;
    unsigned int power ;
    printf("Enter the number : ");
    scanf("%d" , &number);

    printf("The order of the power 'Mark well => positive intger only' : ");
    scanf("%u" , &power);

    i = ( power - 1 );
    z = number ;

    if (number != 0 && power != 0 )
    {
        for( i ; i != 0 ; i--)
        {
            number = number*z ;

        }

          printf("The result of %d^%d is : %d", z, power , number);
    }
    else {
          printf("The result is : 1");
         }


    return 0;
}
