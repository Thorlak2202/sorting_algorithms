#include "sort.h"

/**
 * partition - sorts an array using the Selection sort algorithm
 *
 * @array: data entry
 * @size: size of the array
 * @lo: lower
 * @hi: higher
 *
 * Return: an int
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot, temp, i, j;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j <= hi; j++)
	{
		if (array[j] <= pivot)
		{
			i += 1;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * sort_now - sorts an array using the Selection sort algorithm
 *
 * @array: data entry
 * @size: size of the array
 * @lo: lower
 * @hi: higher
 *
 */

void sort_now(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		sort_now(array, lo, p - 1, size);
		sort_now(array, p + 1, hi, size);
	}
}

/**
 * quick_sort - sorts an array using the Selection sort algorithm
 *
 * @array: data entry
 * @size: size of the array
 *
 */

void quick_sort(int *array, size_t size)
{
	size_t lo, hi;

	if (size < 2)
		return;
	lo = 0;
	hi = size - 1;
	sort_now(array, lo, hi, size);
}
