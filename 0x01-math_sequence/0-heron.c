#include <stdio.h>
#include "heron.h"


/**
 * create_node - creates new node for the Heron sequence
 * @n: a member of the Heron sequence
 *
 * Return: a new node for the Heron sequence
 */
t_cell *create_node(long double n)
{
	t_cell *node = malloc(sizeof(t_cell));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->elt = n;
	node->next = NULL;
	return (node);
}

/**
 * reverse_listint - reverse a list
 * @head: pointer
 * Return: a pointer to the first node of the reversed list
 */

t_cell *reverse_cell(t_cell **head)
{
	t_cell *new_node = *head, *next_node = NULL;

	if (*head == NULL)
		return (NULL);

	while (new_node != NULL)
	{
		new_node = (*head)->next;
		(*head)->next = next_node;
		next_node = *head;

		if (new_node != NULL)
			*head = new_node;
	}


	next_node = NULL;
	return (*head);
}

t_cell *heron(double p, double x0)
{
	t_cell *node = create_node(x0);
	t_cell *ptr = node;

	while (1)
	{
		x0 = (x0 + (p / x0)) * 0.5;
		if ((x0 * x0 - p) <= 0.00000001 )
			break;
		ptr->next = create_node(x0);
		ptr = ptr->next;
	}
	reverse_cell(&node);
	return (node);
}
