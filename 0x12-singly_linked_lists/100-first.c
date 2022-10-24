#include <stdio.h>
/**
* mycode - Prints a string before the main function is executed.
*/
void mycode(void) __attribute__ ((constructor));
void mycode(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
