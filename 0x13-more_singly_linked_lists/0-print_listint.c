#include "lists.h"
/**
 * print_listint - print all the elements of a listint_t.
 * @h: pointer to the linked list type listint_t.
 * Return :the number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
