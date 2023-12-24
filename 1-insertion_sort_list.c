#include "sort.h"

/**
 * insertion_sort_list - sorts list using insertion sort
 * @list: pointer to a linked list
 * Return: this function does not return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *back;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		back = current->prev;
		while (back != NULL && back->n > current->n)
		{
			if (current->next != NULL)
				current->next->prev = back;

			if (back->prev != NULL)
				back->prev->next = current;
			current->prev = back->prev;
			back->next = current->next;
			current->next = back;
			back->prev = current;
			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;

			if (back->prev != NULL)
				back = back->prev->prev;
			else
				break;
			print_list(*list);
		}
		current = current->next;
	}
}
