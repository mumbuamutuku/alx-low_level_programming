#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * 
 * Return: results
 */
void times_table(void)
{
        int x, y, res;

        for (x = 0; x <= 9; x++)
        {
            /* code */
            for (y = 0; y <= 9; y++)
            {
                /* code */
                res = x * y;

                _putchar((res/10) + '0');
                _putchar((res%10) + '0');
                _putchar(',');
                _putchar(' ');
            }
            _putchar('\n');
            
        } 
        _putchar('\n');        
}