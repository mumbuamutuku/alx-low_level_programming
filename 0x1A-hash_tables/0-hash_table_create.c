#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: - is the size of the array
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = (hash_table_t*)malloc(sizeof(hash_table_t));
    unsigned long int i;
    if (table == NULL)
        return (NULL);
    
    table->array = malloc(size * sizeof(hash_node_t *));
    if (table->array == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        table->array[i] = NULL;
    table->size = size;   
    return (table);
}
