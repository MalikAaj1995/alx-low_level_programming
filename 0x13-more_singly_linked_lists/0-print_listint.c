#include "lists.h"
/**
 * print_listint - print all elements of a list
 * @h: pointer to the listint_t
 * return:the numbers of nodes of print_listint
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
