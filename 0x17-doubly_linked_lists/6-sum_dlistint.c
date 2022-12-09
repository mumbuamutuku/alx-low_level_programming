#include "lists.h"
/**
 * sum_dlistint -   returns the sum of all the data (n)
 * @head: A pointer to the head of the dlistint_t list.
 * Return: the sum of all the data (n)
*/

int sum_dlistint(dlistint_t *head)
{
	int sumNode = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sumNode += ptr->n;
		ptr = ptr->next;
	}
	return (sumNode);
}
