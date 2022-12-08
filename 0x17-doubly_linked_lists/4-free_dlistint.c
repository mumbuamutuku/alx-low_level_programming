#include "lists.h"
/**
 * free_dlistint_t -  function that frees a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * 
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
    
}