#include "lists.h"
/**
 * add_node -function that adds a new node at the beginning of a list_t list.
 * @head: start of the node
 * @srt: list to add to node
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *n;
    unsigned int c;

    c = 0;
    n = malloc(sizeof(list_t));
    if (n == NULL)
        return (NULL);
    n->str = strdup(str);
    while (str[c] != '\0')
        c++;
    n->len = c;
    n->next = *head;
    *head = n;
    return (*head);        
}