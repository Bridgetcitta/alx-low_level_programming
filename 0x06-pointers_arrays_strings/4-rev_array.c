#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @n:  is the number of elements of the array
 * @a: parameter of array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
