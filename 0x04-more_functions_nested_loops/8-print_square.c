#include "main.h"
/**
 * print_square - function that prints a square,
 * followed by a new line
 * 
 * @size: is the size of the square
 * 
 * Return: square using  character #
 */
void print_square(int size)
{
    if (size > 0)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                _putchar('#');

            }
            _putchar('\n');
            
        }
    }
    else
        _putchar('\n');
}