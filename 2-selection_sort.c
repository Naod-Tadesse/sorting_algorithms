#include "sort.h"
/**
 * selection_sort - sort ussing selection method
 * @array: takes pointer to array
 * @size: takes the size of the array
 * Return: this function doesnt return
 */

void selection_sort(int *array, size_t size)
{
	unsigned long int i = 0, j;
	int min, temp, change;

	while (i < size)
	{
		min = i;
		change = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				change = 1;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		if (change == 1)
			print_array(array, size);
		i++;
	}
}
