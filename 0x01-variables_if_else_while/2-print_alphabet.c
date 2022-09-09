#include <stdio.h>
/* prints letters in lowercase */
int main(void)
{
  char ch;  
  for (ch = 'a'; ch <= 'z'; ch++)
    putchar(ch);
  putchar('\n');
  return(0);
}

