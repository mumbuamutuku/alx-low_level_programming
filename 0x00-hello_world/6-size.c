/* author Mumbua  */
/* 6 size.c */
#include <stdio.h>
/**
*main -Entry point
*Description -prints size of various types on computer it is compiled
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
