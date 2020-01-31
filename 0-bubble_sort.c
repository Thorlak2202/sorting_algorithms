#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temporal;
	int flag;

	while (flag == 0)
	{
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temporal = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temporal;
			}
			flag = 1;
		}
	}  
}