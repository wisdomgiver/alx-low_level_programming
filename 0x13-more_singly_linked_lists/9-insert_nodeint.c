#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Data for the new node.
 * 
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
