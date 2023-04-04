#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0; /* Counter for number of nodes */

	/* Iterate through the list until the end (NULL) */
	while (h != NULL)
	{
		printf("%d\n", h->n); /* Print the value of the current node */
		h = h->next; /* Move to the next node */
		count++; /* Increment the counter */
	}

	return (count);
}
