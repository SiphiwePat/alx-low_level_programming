#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the first node of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    /* Set the data and next fields of the new node */
    new_node->n = n;
    new_node->next = *head;

    /* Update the head pointer to point to the new node */
    *head = new_node;

    return (new_node);
}
