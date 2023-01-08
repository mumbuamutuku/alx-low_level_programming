#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	char *str;
	hash_node_t *node;

	if (!ht || !key)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	if (value)
		str = strdup(value);
	else
		str = NULL;
	node = ht->array[i];

	if (!node)
		node = new_node(NULL);

	if (node->key)
	{
		ht->array[i] = update_node(node, key, str);
		return (1);
	}
	node->key = strdup(key);
	node->value = str;
	node->next = NULL;

	ht->array[i] = node;
	return (1);
}
