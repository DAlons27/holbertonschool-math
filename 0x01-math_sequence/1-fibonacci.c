#include "fibonacci.h"

/**
 * gold_number - function to calculate of gold number of
 * fibonacci which is the ratio of the last 2 fibonacci number
 * @head: head node
 * Return: Golden number
 */

double gold_number(t_cell *head)
{
	if (!head)
		exit(98);

	return ((double)head->elt / (double)head->next->elt);
}
/**
 * *add_node_fibonacci - Add a node of the fibonaccie series
 * @head: Head node
 * Return: New Head node
 */

t_cell *add_node_fibonacci(t_cell **head)
{
	t_cell *new, *n;

	if (!head)
		return (NULL);

	new = malloc(sizeof(new));
	if (!new)
		return (NULL);

	if (!*head)
	{
		new->elt = 0;
		new->next = *head;
		*head = new;
		return (new);
	}
	if (!(*head)->next)
	{
		new->elt = 1;
		new->next = *head;
		*head = new;
		return (new);
	}

	n = (*head)->next;
	new->elt = (*head)->elt + n->elt;
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * *fibonacci - compute the fibonacci serie
 * Return: @Head node
 */

t_cell *Fibonnaci()
{
	t_cell *head;
	int i = 0;

	head = NULL;

	for (; i < 21; i++)
		add_node_fibonacci(&head);

	return (head);

}
