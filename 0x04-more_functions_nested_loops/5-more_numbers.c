#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * 
 * Return: numbers
 */
void more_numbers(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j <= 14; j++)
        {
            if (j > 9)
                _putchar((j / 10) + '0');            
            _putchar((j % 10) + '0');
        }
        _putchar('\n');
    }
}