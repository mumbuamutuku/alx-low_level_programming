#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line.prints the number of arguments passed into it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int argc,  char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc -1);

    return (0);
}