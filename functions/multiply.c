#include <stdio.h>

/**
 * @multiply - use to times two integer
 * main - check code
 * Return: Always 0
 */

int multiply(int x, int y)
{
	printf("The result of the multiplication of %d x %d = %d\n",
	x, y, x * y);
}

int main()
{
	multiply(3, 10);
	multiply (5, 2);

	return (0);
}
