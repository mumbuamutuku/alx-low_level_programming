#include "main.h"
/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 * @ptr:  is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: Pointer to new memory space
 * If new_size == old_size - ptr.
 * If new_size == 0 and ptr is not NULL - NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *mem;
    char *ptr_copy, *filler;
    unsigned int i;

    if (new_size == old_size)
        return (ptr);
    if (ptr == NULL)
    {
        mem = malloc(new_size);
        if (mem == NULL)
            return (NULL);
    }
    if (new_size == 0 && ptr != NULL)
    {
        free(NULL);
        return (NULL);
    }
    filler = mem;
    
    for (i = 0; i < old_size && i <new_size; i++)
        filler[i] = *ptr_copy++;
    free(ptr);
    return (mem);    
}