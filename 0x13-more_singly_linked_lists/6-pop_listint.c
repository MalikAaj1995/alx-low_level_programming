#include "lists.h"
/**
 * pop_listint - removes and returns the data of the head of listint_t
 * @head: pointer to the listint_t
 *
 * Return: 0 if a linkedlist is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n = 0;

	if (*head == NULL || (*head) == NULL)
	{
		return (0);
	}

	while (*head != NULL)
	{
		n = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
