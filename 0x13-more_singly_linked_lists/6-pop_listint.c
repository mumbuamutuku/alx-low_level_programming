#include "lists.h"
/**
 * pop_listint -function that deletes the head node of a listint_t linked list
 * @head: head of the list
 * Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *new, *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = new = *head;
	if (*head)
	{
		i = new->n;
		*head = new->next;
		free(temp);
	}
	else
		i = 0;
	return (i);
}
