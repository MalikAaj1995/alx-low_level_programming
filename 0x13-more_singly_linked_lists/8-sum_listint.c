#include "lists.h"
/**
 * sum_listint - return the sum of all data (n) in listint_t list
 * @head: pointer to the listint_
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head == NULL)
		return (0);
	node = head;
	while (node != NULL)
	{
	sum += node->n;
	node = node->next;
	}
	return (sum);
}
