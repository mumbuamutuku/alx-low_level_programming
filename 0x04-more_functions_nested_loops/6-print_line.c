#include "main.h"
/**
 * print_line -  function that draws a straight line in the terminal
 * 
 * Return: line
 */
void print_line(int n)
{
    if (n > 0 )
    {
        for(int i = 0; i <= n; i++)
            _putchar('_');
        _putchar('\n');
    }
    else
        _putchar('\n');
}