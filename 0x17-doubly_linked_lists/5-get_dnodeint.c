#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index:  is the index of the node, starting from 0
 * 
 * Return: if the node does not exist, return NULL
 *      else returns the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *newNode;
    unsigned int count = 0;

    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
        return (NULL);
    newNode = head;
    while (newNode != NULL)
    {
        if (count == index)
            return (newNode->data);
        count++;
        newNode = newNode->next;
    }    
}