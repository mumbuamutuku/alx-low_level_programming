#include "lists.h"
/**
 * list_len -function that returns the no of elements in a linked list_t list.
 * @h: ponter to list
 * Return: size of list_t
*/
size_t list_len(const list_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	len = 0;
	len++;
	if (h->next != NULL)
		len += list_len(h->next);
	return (len);
}
