#include "sort.h"

/**
 * quick_sort - sort
 * @array: array
 * @size: size array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, (int)size - 1, size);
}

/**
 * qs - recursion
 * @array: the arra
 * @first: first ele
 * @sec: second ele
 * @size: size array
 * Return: this does not return
 */

void qs(int *array, int first, int sec, size_t size)
{
	int base;

	if (sec <= first)
		return;

	base = tp(array, first, sec, size);
	qs(array, first, base - 1, size);
	qs(array, base + 1, sec, size);
}

/**
 * tp - partitions
 * @array: array
 * @start: first
 * @end: ending
 * @size: size array
 * Return: int
 */
int tp(int *array, int start, int end, size_t size)
{
	int base, i, j;
	int temp, swap = 0;

	base = array[end];
	i = start - 1;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < base)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if ((array[i] > array[j]) || (array[i] < array[j]))
				swap = 1;
		}
		if (swap)
		{
			print_array(array, size);
			swap = 0;
		}
	}
	i++;
	temp = array[i];
	array[i] = array[end];
	array[end] = temp;
	if ((array[i] >  array[end]) || (array[i] < array[end]))
		print_array(array, size);
	return (i);
}

