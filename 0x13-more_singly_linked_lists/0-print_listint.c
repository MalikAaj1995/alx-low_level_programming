#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *print_listint - print all the elements of a list.
 *@h: pointer to the linked list type listint.
 *
 *Return :number of nodes.
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
