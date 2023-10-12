#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search algo
 * @array: array passed
 * @size: size of array
 * @value: value to be searched
 * Return: index of value if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_steps, left, right;
	int array_size = size
		
	if (array_size == 0)
	{
		return -1;
       	}
	jump_steps = sqrt(array_size);
	left = 0, right = jump_steps;
	while (left < array_size && array[left] < value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		left += jump_steps;
	}
	printf("Value found between indexes [%d] and [%d]\n",
			left - jump_steps, left);
	right = left;
	left -= jump_steps;
	for (; left <= right && left < array_size; left++)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}
	return (-1);
}
