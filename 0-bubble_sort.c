#include "sort.h"

/**
 * bubble_sort - sorts the list with bubble sort method
 * @array: pointer to the array to be sorted
 * @size: size of the array
 * Return: this function does not return
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i = 0;
	unsigned long int j;

	while (i < size)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j] < array[j - 1])
			{
				exchange(array, j);
				print_array(array, size);
			}
		}
		i++;
	}
}

/**
 * exchange - exchange indexes
 * @array: the array
 * @in1: the index
 * Return: nothing
 */

void exchange(int *array, unsigned long int in1)
{
	int hold;
	int in2;

	in2 = in1 - 1;
	hold = array[in1];
	array[in1] = array[in2];
	array[in2] = hold;
}
