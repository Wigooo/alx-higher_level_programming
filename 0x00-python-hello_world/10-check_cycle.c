#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checking the cycle
 *
 * @list: pointer
 *
 * Return: the result of the checking
*/

int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
