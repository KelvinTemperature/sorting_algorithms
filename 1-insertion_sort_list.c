#include "sort.h"

/**
 * insertion_sort_list - function to sort a doubly linked list
 * using insertion method
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp;

	if (!list)
		return;

	node = *list;
	while (node)
	{
		while (node->next && (node->n > node->next->n))
		{
			temp = node->next;
			node->next = temp->next;
			temp->prev = node->prev;

			if (node->prev)
				node->prev->next = temp;

			if (temp->next)
				temp->next->prev = node;

			node->prev = temp;
			temp->next = node;

			if (temp->prev)
				node = temp->prev;
			else
				*list = temp;
			print_list(*list);
		}
		node = node->next;
	}
}
