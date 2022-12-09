#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx: is the index of the list where the new node should be added.
 * @h: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	if (newNode == NULL)
		return (NULL);
	newNode->n =  n;
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
