#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 * @index: is the index of the node that should be deleted
 * @head: A pointer to the head of the dlistint_t list.
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp, *del;
    unsigned i;

    if (*head == NULL)
        return (-1);
    i = 0;
    temp = *head;
    while (temp->prev != NULL)
        temp = temp->prev;
    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }
    if ( i < index)
    {
        return (-1);
    }
    if (i == 0 && temp->next != NULL)
    {
        del = temp;
        temp = temp->next;
        temp->prev = NULL;
        *head = temp;
        free(del);
        return (1);
    }
    else if (i > 0)
    {
        del = temp;
        temp = temp->prev;
        temp->next = del->next;
        free(del);
    }
    else
    {
        *head = temp->next;
        free(temp);
    }
    return (1);
}