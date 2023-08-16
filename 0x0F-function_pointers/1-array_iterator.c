#include "function_pointers.h"

/**
 * array_iterator - executes a func gvn as a para of each elem of an arr
 * @array: array
 * @size: size of the array
 * @action: pointer to the func
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
