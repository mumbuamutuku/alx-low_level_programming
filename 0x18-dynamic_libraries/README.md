<h1> 0x18. C - Dynamic libraries </h1>

**libdynamic.so, main.h**
Create the dynamic library libdynamic.so containing all the functions listed below:
<ul>
<li> int _putchar(char c); </li>

<li> int _islower(int c); </li>

<li> int _isalpha(int c); </li>

<li> int _abs(int n); </li>

<li> int _isupper(int c); </li>

<li> int _isdigit(int c); </li>

<li> int _strlen(char *s); </li>

<li> void _puts(char *s); </li>

<li> char *_strcpy(char *dest, char *src); </li>

<li> int _atoi(char *s); </li>

<li> char *_strcat(char *dest, char *src); </li>

<li> char *_strncat(char *dest, char *src, int n); </li>

<li> char *_strncpy(char *dest, char *src, int n); </li>

<li> int _strcmp(char *s1, char *s2); </li>

<li> char *_memset(char *s, char b, unsigned int n); </li>

<li> char *_memcpy(char *dest, char *src, unsigned int n); </li>

<li> char *_strchr(char *s, char c); </li>

<li> unsigned int _strspn(char *s, char *accept); </li>

<li> char *_strpbrk(char *s, char *accept); </li>

<li> char *_strstr(char *haystack, char *needle); </li>
</ul>

1. Without libraries what have we? We have no past and no future

**1-create_dynamic_lib.sh**: Bash script that creates a dynamic library called liball.so from all the .c files in the current directory.


2. Let's call C functions from Python

**100-operations.so**: C dynamic library containing basic C mathematical operation functions that can be called from Python.

Includes:
<ul><ul list-style-type: square>
<li> int add(int a, int b); </li>
<li> int sub(int a, int b); </li>
<li> int mul(int a, int b); </li>
<li> int div(int a, int b); </li>
<li> int mod(int a, int b); </li>
</ul></ul>
