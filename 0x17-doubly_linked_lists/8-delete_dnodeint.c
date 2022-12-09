#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 * @index: is the index of the node that should be deleted
 * @head: A pointer to the head of the dlistint_t list.
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head, *del;
    unsigned i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        head = temp->next;
        temp->next = NULL;
        free(temp);
        return (1);
    }
    else
    {
        for(i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        del = temp->next;
        temp->next = temp->next->next;
        del->next = NULL;
        free(del);
        return (1);
    }
}