Write a function that creates an array of chars, and initializes it with a specific char.



Prototype: char *create_array(unsigned int size, char c);

Returns NULL if size = 0

Returns a pointer to the array, or NULL if it fails





Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.



Prototype: char *_strdup(char *str);



Write a function that concatenates two strings.



Prototype: char *str_concat(char *s1, char *s2);



Write a function that returns a pointer to a 2 dimensional array of integers.



Prototype: int **alloc_grid(int width, int height);



Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.



Prototype: void free_grid(int **grid, int height);
