#include "search_algos.h"
/*
 * interpolation_search - search for a value using interpolation search
 * @array: array to search
 * @size: size of the array
 * @value: value to be found
 * Return: index of value if found, else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t position;
	int interpolation;

	if (!array)
		return (-1);
	while (left <= right)
	{
		position = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
		interpolation = position;
		if (position >= size)
		{
			printf("Value checked array[%d] is out of range\n", interpolation);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", interpolation, array[interpolation]);
		if (array[interpolation] == value)
			return (interpolation);
		else if (array[interpolation] > value)
		{
			right = interpolation - 1;
			continue;
		}
		else
		{
			left = interpolation + 1;
			continue;
		}
	}
	return (-1);
}
