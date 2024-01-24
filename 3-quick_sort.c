#include "sort.h"

/**
 * quick_sort - function sort array using quick method
 * @array: the unsorted array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	partition(array, 0, (size - 1), size);
}

/**
 * partition - function to partition the array
 * @low: lower end of array
 * @high: upper end of array
 * @size: size of the array
 */

void partition(int *array, int low, int high, int size)
{
	int u, l, i;
	int temp;

	if (low < high)
	{
		u = high;
		l = low;
		for (i = low; i < high; i++)
		{
			if (array[i] < array[u])
			{
				if (i != l)
				{
					temp = array[i];
					array[i] = array[l];
					array[l] = temp;
					print_array(array, size);
				}
				l++;
			}
		}
		if (l != u && array[l] != array[u])
		{
			temp = array[l];
			array[l] = array[u];
			array[u] = temp;
			print_array(array, size);
		}
		partition(array, low, (l - 1), size);
		partition(array, (l + 1), high, size);
	}
}
