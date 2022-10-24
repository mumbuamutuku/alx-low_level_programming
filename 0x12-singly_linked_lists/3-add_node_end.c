#include "lists.h"
/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 * @head: Pointer to pointer to start of the list
 * @str: String to copy
 * Return: Address of new element, NULL if fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *n, *new;
    unsigned int c;

    c = 0;
    if (*head == NULL)
    {
        n = malloc(sizeof(list_t));
        if (n == NULL)
            return (NULL);
        n->next = NULL;
        *head = n;
        n->str = strdup(str);
        while (str[c] != '\0')
            c++;
        n->len = c;
    }
    else
    {
        new = *head;
        while (1)
        {
            if (new->next == NULL)
                break;
            new = new->next;
        }
        n = malloc(sizeof(list_t));
        if (n == NULL)
            return (NULL);
        n->next = NULL;
        new->next = n;
        n->str = strdup(str);
        while (str[c] != '\0')
        c++;
        n->len = c;
    }
    return (n);        
}