#include "lists.h"
/**
 * print_list -  function that prints all the elements of a list_t list
 * @h: list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 1;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		i += print_list(h->next);
	return (i);
}
