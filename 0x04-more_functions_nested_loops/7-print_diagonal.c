#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * 
 * Return: diagnol line
 */
void print_diagonal(int n)
{
      if (n > 0 )
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
                _putchar(' ');
            _putchar('\\');

            if (i == n - 1)
				continue;

			_putchar('\n');
        }

        _putchar('\n');
    }
    else
        _putchar('\n');
}