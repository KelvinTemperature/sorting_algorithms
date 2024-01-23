#include "sort.h"

/**
 * selection_sort - sort an array by selection method
 * @array: the array to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t small, temp, i, j;

	for (i = 0; i < (size - 1); i++)
	{
		small = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[small])
				small = j;
		}

		if (small != i)
		{
			temp = array[i];
			array[i] = array[small];
			array[small] = temp;

			print_array(array, size);
		}
	}
}
