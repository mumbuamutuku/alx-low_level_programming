#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: pointer to list
*Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
