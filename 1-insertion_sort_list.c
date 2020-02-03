#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers.
 *
 * @list: entry data
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *swapper;
	int flag;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		tmp = current;
		while (tmp->prev != NULL)
		{
			flag = 0;
			if (tmp->n < tmp->prev->n)
			{
				if (tmp->prev->prev != NULL)
					tmp->prev->prev->next = tmp;
				tmp->prev->next = tmp->next;
				swapper = tmp->prev->prev;
				tmp->prev->prev = tmp;
				if (tmp->next != NULL)
					tmp->next->prev = tmp->prev;
				tmp->next = tmp->prev;
				tmp->prev = swapper;
				flag = 1;
				if (tmp->prev == NULL)
					*list = tmp;
				print_list(*list);
			}
			if (flag == 0)
				tmp = tmp->prev;
		}
		current = current->next;
	}
}
