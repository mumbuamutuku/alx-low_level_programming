#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 * 
 * Return: the address of the new element, 
 *          or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode, *temp;

    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
        return (NULL);

    newNode->n = n;
    newNode->next = NULL;

    temp = *head;
    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return (newNode);
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;

    return(newNode);   
}