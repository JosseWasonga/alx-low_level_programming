#include "main.h"
void more_numbers(void)
{
    int i=0,j;

    while(i<10)
    {
        for (j=0;j<=14;j++)

        {
            if (j>9)
            {
                putchar((j/10)+'0');

            }
             putchar((j%10) + '0');
        }
        putchar('\n');
       i++;
    }

}

