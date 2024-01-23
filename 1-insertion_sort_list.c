#include "sort.h"

/**
 * insertion_sort_list - function to sort a doubly linked list
 * using insertion method
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node;
	int temp;

	node = *list;
	while (node)
	{
		while (node->next && (node->n > node->next->n))
		{
			temp = node->prev->n;
			node->prev->n = node->next->n;
			node->next->n = temp;
			node = node->prev;
		}
		node = node->next;
	}
}
