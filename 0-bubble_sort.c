#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temporal;

	for (i = 0; i < size-1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temporal = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temporal;
				print_array(array, size);
			}
		}
	}  
}