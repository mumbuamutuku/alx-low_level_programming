#include "lists.h"
/**
*add_nodeint_end -adds a new node at the end of a listint_t list.
*@head: the first node pointer
*@n: node to add
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *newnode;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	newnode = *head;
	while (newnode->next != NULL)
		newnode = newnode->next;
	newnode->next = new;
	return (*head);
}
