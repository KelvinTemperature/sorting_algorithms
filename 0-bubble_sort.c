#include "sort.h"

/**
 * bubble_sort - function to sort an array in asceding order
 * @array: array to sort
 * @size: size oof the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int save, check;

	for (a = size, check = 1; a > 0 && check; a--)
	{
		check = 0;
		for (b = 0; b < (size - 1); b++)
		{
			if (array[b] > array[b + 1])
			{
				save = array[b];
				array[b] = array[b + 1];
				array[b + 1] = save;
				print_array(array, size);
				check = 1;
			}
		}
	}
}
