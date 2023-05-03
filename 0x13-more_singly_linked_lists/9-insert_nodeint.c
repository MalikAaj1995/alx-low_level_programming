#include "lists.h"
/**
 * insert_nodeint_at_index - its inserts new node at a given position
 * @head: pointer the head of a listint_t
 * @n: data value of the new_node
 * @idx: the adress of new_node
 * Return: adress of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);

	new_node = *head;
        new_node->n = n;

	while (*head != NULL)
		return (new_node);
	temp = *head;
	if (temp != NULL && i != idx)
	temp = temp->next;
	if (temp == NULL)
	free(new_node);
		return (NULL);
	
	if (temp != NULL && i == idx)
	new_node->next = temp->next;

	return (new_node);
}
